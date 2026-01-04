#include<stdio.h>
int main()
{
	int ret = 1; 
	for(int i=1; i<=5 ; i++)
	{
		ret=ret*i; 
	}
	printf("%d ",ret);
	return 0;
}
