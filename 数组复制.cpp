#include<stdio.h>
int main()
{
	int source[]={2,4,6,8,10};
	int destination[5];
	for(int a=0; a<=4; a++)
	{
	    destination[a] = source[a];
	}
	printf("复制后的数组：");
	for(int i= 0;i<5;i++)
	{
		printf("%d,",destination[i]);
	}
	return 0;
 } 
