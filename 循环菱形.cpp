#include<stdio.h>
int main()
{
	int n;
	printf("请输入要多少层（1-9）：");
	scanf("%d",&n);
	for(int hang =1; hang<=n; hang++)
	{
		for(int i=1; i<=n-hang; i++)
		{
			printf(" ");
		}
		for(int i=1; i<=hang; i++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
 } 
