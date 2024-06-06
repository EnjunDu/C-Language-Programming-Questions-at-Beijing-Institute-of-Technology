#include <stdio.h>  
#include <stdlib.h>  
typedef struct numLink  
{  
    int no;  
    struct numLink *next;  
}NODE;  

NODE *MoveNode( NODE * head )
{
	NODE *p,*s,*pend,*q;int flag=1;
	p=pend=head;
	while(pend->next) pend=pend->next;q=pend;
	while(flag&&p->next->next)     //链的最后一个数为偶时，不换到最后 
	{
		if(p->next==pend) flag=0;     //pend随着最后一个数的移动而移动，不可用p!=pend判断结尾 
		if(p->next->no%2) p=p->next;
		else
		{
			s=p->next;p->next=s->next;
			s->next=q->next;q->next=s;
			q=q->next;
		}
	}
	return head;
}
void SetLink( NODE *h )  
{  
    NODE *p=NULL, *q=NULL;  
    int m;  
    while(1)  
    {  
        scanf("%d",&m);  
        if( m == -1 )  
            return ;  
        p = (NODE *)malloc(sizeof(NODE));  
        p->no = m;  
        p->next = NULL;  
        if( h->next == NULL )  
        {  
            h->next = p;  
            q = p;  
        }  
        else  
        {  
            q->next = p;  
            q = q->next;  
        }  
    }  
    return;  
}  
int main( )  
{  
    NODE *head=NULL, *q=NULL;  
    head = (NODE *)malloc(sizeof(NODE));  
    head->no = -1;  
    head->next = NULL;  
    SetLink( head );  
    q = MoveNode( head );  
    do  
    {  
        printf("%d ",q->next->no);  
        q = q->next;  
    }while( q->next != NULL );   
    printf("\n");  
    return 0;  
}  
