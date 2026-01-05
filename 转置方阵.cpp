#include<stdio.h>
int main()
{
    printf("请输入维度:");
    int n;
	scanf("%d",&n); 
	int arr[n][n];
	int brr[n][n];
	printf("请输入元素：");	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++)
		{
			brr[j][i]=arr[i][j];
		}
	}
	
	printf("原矩阵为：\n");
		for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++)
		{
			printf("%d \t",arr[i][j]);
		}
			printf("\n"); 
	} 
	printf("转置之后的矩阵；\n");
	
		for(int i=0; i<n; i++)
	{
			for(int j=0; j<n; j++)
		{
			printf("%d \t",brr[i][j]);
		}
		printf("\n"); 
	}
	
	return 0;
}
