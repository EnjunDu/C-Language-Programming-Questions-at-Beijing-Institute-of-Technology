  #include <stdio.h>  
  #include <string.h>  
  
  int maxLength(int* arr,int arrlen)
  {
  	int i,j,maxLength=0,len;
  	for(i=0;i<arrlen;i++)
  	{
	  	for(j=i+1;arr[j]!=arr[i]&&j<=arrlen;)
	  	{j++;}
		len=j-i+1;
	  	if(len>=maxLength){maxLength=len;}
	  }
  }
  
  
int main() {  
    char input[100000];  
    int arr[100000], arrLen = 0;  
      
    // �����ַ�������  
    scanf("%s", input);  
    // �����ȡ���ֲ��洢��������  
    char *token = strtok(input, "[],");  
    while (token != NULL) {  
        sscanf(token, "%d", &arr[arrLen++]);  
        token = strtok(NULL, "[],");  
    }  
      
    // ��������ظ������鲢��ӡ  
    printf("%d\n", maxLength(arr, arrLen));  
  
    return 0;  
}  
