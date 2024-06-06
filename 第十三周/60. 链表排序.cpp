 
#include "stdio.h"  
#include "stdlib.h"  
  
struct node  
{   int data;  
    struct node * next;  
} ;  
  
typedef struct node NODE;  
typedef struct node * PNODE;  
void outlist( PNODE );  
  
int main ( )  
{   int num=1;  
    PNODE head;  
  
    head = (PNODE)malloc( sizeof(NODE) );  
    head->next = NULL;  
    head->data = -1;  
  
    while ( num!=0 )  
    {   scanf("%d", &num);  
        if ( num!=0 )  
            sortlist( head, num);  
    }  
    outlist( head );  
    return 0;  
}  
  
void outlist( PNODE head )  
{   PNODE p;  
    p = head->next;  
    while ( p != NULL )  
    {   printf("%d\n", p->data);  
        p = p->next;  
    }  
}  
void sortlist(PNODE h, int num)
{
    PNODE prev = h;
    PNODE curr = h->next;

    // 遍历链表，找到合适的位置插入新节点
    while (curr != NULL && curr->data < num) {
        prev = curr;
        curr = curr->next;
    }

    // 检查当前节点的数据是否重复，如果重复则不进行插入
    if (curr == NULL || curr->data > num) {
        PNODE new_node = (PNODE)malloc(sizeof(NODE));
        new_node->data = num;
        new_node->next = curr;
        prev->next = new_node;
    }
}
