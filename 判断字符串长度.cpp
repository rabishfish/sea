#include<stdio.h>
#include<string.h>
int main()
{
	int n,num=0;
	printf("请输入字符数组的大小：");
	scanf("%d",&n);
	getchar(); 
	char arr[n+1];
	fgets(arr, n+1 ,stdin);
	arr[strcspn(arr,"\n")]='\0';
	for(int i=0; arr[i]!='\0'; i++)
	{ 
	   num++;	
	}
	
	printf("字符串大小为：%d",num);
	return 0;
 } 
