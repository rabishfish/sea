#include<stdio.h>
int main()
{
	int a = 0;
	for(int i = 1; i<=100; i++)
	{
		if(i%2==0)
		{
			a += i;
		 } 
	}
	printf("%d ",a);
	return 0;
}
