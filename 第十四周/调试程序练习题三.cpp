
#include<stdio.h>
int main()
{
    int n;
    int m;
    int i;
    int k = 0;
    int l = 0;//nΪ������mΪ�̶�����,lΪ��ӵ�С������Ŀ
    scanf("%d %d", &n, &m);
    int c[n];
    for(i=0; i<n; i++)
        c[i] = i+1;   //��ÿ��С���ѵı�Ŵ���������
    
    while(l < n-1)
    {
        for(i=0; i<n; i++)
        {
            if(c[i])
            {                               //���������û�б���ֵΪ��Ϳ��Խ�������  
                k++;
                if(k == m)
                {
                    c[i] = 0;//С������ӣ����������鸳ֵΪ��
                    k = 0;   //k����Ϊ��
                    l++;     //���С������+1 
                    if(l == n-1)
                    {                       //�����С���Ѵﵽn-1��ʱ 
                        for(i=0; i<=n; i++)
                        {
                            if(c[i])
                            {
                                printf("The left child is NO %d.\n", c[i]);//���ʣ��С���ѵı�� 
                                break;
                            }           
                        }
                        break;
                    }
                }   
            }
        }
    }
    return 0;
}
