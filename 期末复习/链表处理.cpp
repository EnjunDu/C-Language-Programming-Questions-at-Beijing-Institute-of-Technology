 #include <stdio.h>    
#include <stdlib.h>    
    
typedef struct sdata    
{  int num;    
   struct sdata *next;    
} SNODE;    
    
void movenode( SNODE * head, int m){  
    SNODE * previous,*current,*temp;  
    int k=1;  
    temp=head->next;  
    previous=head;  
    current=head->next;  
    while(k<m&&current!=NULL){  
        current=current->next;  
        previous=previous->next;  
        k++;  
    }  
    previous->next=current->next;
    current->next=head->next;  
    head->next=current;  
}  
    
void setlink( SNODE * head, int n )    
{       
    SNODE *p;    
    
    while ( n > 0 )    
    {   p = ( SNODE * ) malloc( sizeof( SNODE ) );    
        p->num = n;    
        p->next = head->next;    
        head->next = p;    
        n --;    
    }    
}    
    
void outlink( SNODE * head )    
{    
    while( head->next != NULL )    
    {    
        head = head->next;    
        printf( "%d,", head->num );    
    }    
    return;    
}    
    
int main( )    
{   int n, m;    
    SNODE * head = NULL;    
    
    scanf("%d%d", &n, &m );    
    head = ( SNODE * ) malloc( sizeof( SNODE ) );    
    head->num = -1;    
    head->next = NULL;    
    setlink( head, n );    
    if(m<=n){ 
    movenode( head, m );     
    }
    
    outlink( head );    
    printf("\n");    
    return 0;    
}  
