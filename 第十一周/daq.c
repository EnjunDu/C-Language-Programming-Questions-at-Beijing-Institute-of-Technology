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
      
    // 读入字符串数组  
    scanf("%s", input);  
    // 逐个提取数字并存储到数组中  
    char *token = strtok(input, "[],");  
    while (token != NULL) {  
        sscanf(token, "%d", &arr[arrLen++]);  
        token = strtok(NULL, "[],");  
    }  
      
    // 计算最长无重复子数组并打印  
    printf("%d\n", maxLength(arr, arrLen));  
  
    return 0;  
}  
