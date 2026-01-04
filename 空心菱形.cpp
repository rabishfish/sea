#include<stdio.h>
int main()
{
	int n,i,j;
	printf("请输入菱形的大小（奇数）：");
	scanf("%d",&n);
	
	for(i=1; i<=n;i+=2)
	{
		for(j=1;j<=(n-i)/2; j++)
		{ 
		   printf(" ");		
		}
			if(i==1)
			  printf("*");
			else
			{
				printf("*");
				for(j=1; j<=i-2;j++)
				  printf(" ");
				printf("*");
		}
		printf("\n");
	 } 
	 for(i=n-2; i>=1; i-=2)
	 {
	 	for(j=1;j<=(n-i)/2;j++)
	 	  printf(" ");
	 	if(i==1)
	 	{
	 		printf("*");
		 }else
		 {
		 	printf("*");
		 	for(j=1; j<=i-2;j++)
		 	{
		 		printf(" ");
			 }
			 printf("*");
		 }
		 printf("\n");
	 }
	return 0;
 } 
