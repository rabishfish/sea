#include<stdio.h>
int main()
{
	printf("请输入菱形个数、层数（只能是奇数）：");
	int  G,n;
	scanf("%d %d",&G,&n);
	if(n%2==0)
	{
		printf("输入出错，请重新输入");
	 } else
	 {
	 		for(int i=1; i<=(n+1)/2; i++)
	{
		for(int j=(n-1)/2; j>i-1; j--)
		{
			printf(" ");
		}
		for(int n=2*i-1; n>0; n-- )
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(int i=1; i<=(n-1)/2; i++)
	{
		for(int j=i; j>0; j--)
		{
			printf(" ");
		}
		for(int q=n-2*i; q>0; q--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(int ceng=1; ceng<G; ceng++)
	{
			for(int i=2; i<=(n+1)/2; i++)
	{
		for(int j=(n-1)/2; j>i-1; j--)
		{
			printf(" ");
		}
		for(int n=2*i-1; n>0; n-- )
		{
			printf("*");
		}
		printf("\n");
		
	}
	for(int i=1; i<=(n-1)/2; i++)
	{
		for(int j=i; j>0; j--)
		{
			printf(" ");
		}
		for(int q=n-2*i; q>0; q--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	}	
	 }
	 

	return 0;
}
