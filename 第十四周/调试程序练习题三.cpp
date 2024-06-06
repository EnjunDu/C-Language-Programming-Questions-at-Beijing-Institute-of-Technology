
#include<stdio.h>
int main()
{
    int n;
    int m;
    int i;
    int k = 0;
    int l = 0;//n为总数，m为固定数字,l为离队的小朋友数目
    scanf("%d %d", &n, &m);
    int c[n];
    for(i=0; i<n; i++)
        c[i] = i+1;   //把每个小朋友的编号存入数组中
    
    while(l < n-1)
    {
        for(i=0; i<n; i++)
        {
            if(c[i])
            {                               //若这个数组没有被赋值为零就可以接着运算  
                k++;
                if(k == m)
                {
                    c[i] = 0;//小朋友离队，把他的数组赋值为零
                    k = 0;   //k重置为零
                    l++;     //离队小朋友数+1 
                    if(l == n-1)
                    {                       //当离队小朋友达到n-1人时 
                        for(i=0; i<=n; i++)
                        {
                            if(c[i])
                            {
                                printf("The left child is NO %d.\n", c[i]);//输出剩下小朋友的编号 
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
