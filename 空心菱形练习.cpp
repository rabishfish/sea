#include<stdio.h>
int main()
{
	printf("请输入菱形的大小（奇数）：");
	int n;
	scanf("%d",&n);
	for(int i=1; i<=(n+1)/2; i++)
	{
		for(i; i<(n+1)/2-1; i++)
		  printf(" ");
		if(i==1)
		{
			printf("*");
	    }
	    else
	    {
	    	printf("*");
	    	for(int j=1; j<i; j++)
	    	{
	    		printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
 } 
