#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
 
#define MAX_LEN 500  
#define HASH_SIZE 2000  
  
typedef struct Node {  
    char str[MAX_LEN];  
    int index;  
    struct Node* next;  
} Node;  
  
Node* hashtable[HASH_SIZE];  
  
unsigned int hash(const char* str) {  
    unsigned int hash = 0;  
    while (*str) {  
        hash = (hash << 5) + *str++;  
    }  
    return hash % HASH_SIZE;  
}  
  
void insert(const char* str, int index) {  
    Node* newNode = (Node*) malloc(sizeof(Node));  
    strcpy(newNode->str, str);  
    newNode->index = index;  
    newNode->next = NULL;  
  
    unsigned int hashValue = hash(str);  
    if (hashtable[hashValue] == NULL) {  
        hashtable[hashValue] = newNode;  
    } else {  
        Node* current = hashtable[hashValue];  
        while (current->next != NULL) {  
            current = current->next;  
        }  
        current->next = newNode;  
    }  
}  
  
int find(const char* str) {  
    unsigned int hashValue = hash(str);  
    Node* current = hashtable[hashValue];  
    while (current != NULL) {  
        if (strcmp(current->str, str) == 0) {  
            return current->index;  
        }  
        current = current->next;  
    }  
    return -1;  
}  
  
int is_alpha(char c){  
    if((65 <= c && c <= 90) || (97 <= c && c <= 122)){  
        return 1;  
    } else {  
        return 0;  
    }  
}  
  
int main() {  
    char st[MAX_LEN], wo[MAX_LEN], bi[MAX_LEN];  
    char *s, *w, *b;  
    int count = 0;  
  
    memset(hashtable, 0, sizeof(hashtable));  
  
    while (gets(st)) {  
        s = st;  
        w = wo;  
        b = bi;  
        while (*s) {  
            if (is_alpha(*s)) {  
                *w++ = *s;  
                *w = '\0';  
            } else {  
                *b++ = *s;  
                *w = '\0';  
            }  
  
            char next_char = *(s + 1);  
            if (!is_alpha(*s) && is_alpha(next_char) || !next_char) {  
                *b = '\0';  
                int index = find(wo);  
  
                if (index >= 0) {  
                    printf("%d", index + 1);  
                } else if (strlen(wo) > 0) {  
                    insert(wo, count++);  
                    printf("%s", wo);  
                }  
  
                printf("%s", bi);  
  
                w = wo;  
                b = bi;  
            }  
  
            s++;  
        }  
        printf("\n");  
    }  
  
    return 0;  
}
