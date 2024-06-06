#include<stdio.h>  
#include<stdlib.h>  
typedef struct node {  
    int data;   
    struct node *next;   
} NODE;  
NODE* findelement(NODE *head){
	NODE* q;
	int i=0,n;
	for(q=head;q->next !=NULL;i++){
		q=q->next;
		n=i;
	}
	q=head;
	 // 如果链表长度小于2，返回空指针
		if (q == NULL || q->next == NULL) {
		return NULL;
		 }
	for(q, i=0;i<n&&q->next!=NULL;i++){
	
		q=q->next;
	}
	return (q);
}
int main()   
{  
    NODE *head = (NODE*)malloc(sizeof(NODE));  
    head->data = 0;  
    head->next = NULL;  
    int n, x;  
    scanf("%d", &n);  
    NODE *pre = head;  
    while(n--) {  
        scanf("%d", &x);  
        NODE* cnt = (NODE*)malloc(sizeof(NODE));  
        cnt->data = x;  
        cnt->next = NULL;  
        pre->next = cnt;  
        pre = cnt;  
    }  
    NODE *pos = findelement(head);  
    if(pos == NULL) puts("No such element.");  
    else printf("%d\n", pos->data);  
    return 0;  
}  
