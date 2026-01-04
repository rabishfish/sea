#include<stdio.h>
int main()
{
	int a=1;
	while(a<=9)
	{
		int b=1; 
		while(b<=a)
		{
			printf("%d*%d=%d\t",a,b,a*b);
			b+=1;
		}
		a+=1;
		printf("\n");
	}
	return 0;
}
