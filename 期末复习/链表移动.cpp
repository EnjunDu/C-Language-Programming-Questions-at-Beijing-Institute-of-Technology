#include <stdio.h>    
#include <stdlib.h>    
typedef struct numLink    
{    
    int no;    
    struct numLink *next;    
}NODE;    
    
NODE *monenode( NODE *head, int m ){  
    NODE *temp,*start,*middle,*middlee,*last,*a;  
    a=head;  
    temp=head;  
    a=a->next;  
    start=a;  
    a=head;  
    int i;  
    for(i=0;i<m;i++){  
        a=a->next;  
    }     
    middle=a;  
    if(middle->next!=NULL){  
    middlee=middle->next;  
    while(a->next!=NULL){  
        a=a->next;  
    }  
    last=a;  
    head->next=middlee;  
    last->next=start;  
    middle->next=NULL;  
    }  
    return temp;  
      
}  
    
void SetLink( NODE *h, int n )    
{    
    NODE *p=NULL, *q=NULL;    
    int i;    
    for( i=0; i<n; i++)    
    {    
        p = (NODE *)malloc(sizeof(NODE));    
        p->no = i+1;    
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
    int n,m;    
    NODE *head=NULL, *q=NULL;    
    scanf("%d%d",&n,&m);    
    head = (NODE *)malloc(sizeof(NODE));    
    head->no = -1;    
    head->next = NULL;    
    
    SetLink( head, n );    
    
    q = monenode( head, m );    
    
    do    
    {    
        printf("%d ",q->next->no);    
        q = q->next;    
    }while( q->next != NULL );     
    printf("\n");    
    return 0;    
}  
