#include <stdio.h>  
#include <stdlib.h>   
struct Node {  
    char *name;  
    int  score;  
    struct Node *next;  
};  
struct Node *connect(struct Node *x, struct Node *y, struct Node *z) {
    // ���Ƚ�������㰴�շ����ɸߵ��ͽ�������
    struct Node *nodes[3] = {x, y, z};
    struct Node *temp;
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (nodes[i]->score < nodes[j]->score) {
                temp = nodes[i];
                nodes[i] = nodes[j];
                nodes[j] = temp;
            }
        }
    }
    // �������Ľ���������
    nodes[0]->next = nodes[1];
    nodes[1]->next = nodes[2];
    nodes[2]->next = NULL;
    // ���������ͷ���
    return nodes[0];
}
int main(int argc, char *argv[]) {      
     struct Node a, b, c, *p;  
     a.name = "LiPing";  
     b.name = "LiuHai";  
     c.name = "FengYun";   
     scanf("%d,%d,%d", &a.score, &b.score, &c.score);  
     p= connect(&a,&b,&c);  
     printf("%s-%d\n",p->name,p->score);  
     p=p->next;  
     printf("%s-%d\n",p->name,p->score);  
     p=p->next;  
     printf("%s-%d\n",p->name,p->score);  
     return 0;  
}  
