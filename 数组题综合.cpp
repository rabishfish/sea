#include<stdio.h>
int main()
{
	int n;
	printf("请输入学生个数：\n");
	scanf("%d",&n);
	int arr[n];
	printf("请输入学生分数：\n");
	int temp,cout;
	
	for(int i=0 ; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		 } 
	}
	
	for(int i=0; i<n; i++)
	{
		printf("%d \t",arr[i]);
		cout++;
		if(cout%5==0)
		{
			printf("\n");
		}
	}
	return 0;
	
 } 
