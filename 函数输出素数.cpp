#include<stdio.h>
int main()
{
	printf("请输入数字范围：");
	int n;
	scanf("%d",&n);
	printf("素数有：");
	for(int i=2; i<=n; i++)
	{
		    int is=1;
			for(int j=2; j<i; j++)
		  {
		  	if(i%j==0)
		  	{
		  		is=0;
		  		break;
			}
		  }
			if(is==1)
		  {
			printf("%d ",i);
		  }
	}	
	printf("\n");
	return 0;
}
	
