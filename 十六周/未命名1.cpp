#include<stdio.h>  
#include<stdlib.h>  
typedef struct node {  
    int data;   
    struct node *next;   
} NODE;  
NODE* findelement(NODE *head){
	NODE *p,*q;
	p=head,q=p->next;
	if(p->next==NULL||q->next==NULL){
		return (NULL);
	}
	for(int i=0;i<100;i++){
		p=p->next;
		q=p->next;
		if(q->next==NULL){
			head->data=p->data;
			goto ff;
		}
	}
	ff:return (head);
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
