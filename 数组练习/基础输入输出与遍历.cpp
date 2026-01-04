#include<stdio.h>
int main()
{
	int arr[3][3];
	int sum = 0;
	for(int i=0; i<3;i++)
	{
		for(int a=0; a<3; a++)
		{
			scanf("%d,",&arr[i][a]);
		}
	}
	for( int i=0; i<3;i++)
	{
		for( int a=0; a<3; a++)
		{
			printf("%d ",arr[i][a]);
		}
		printf("\n");
	}
	for( int i=0; i<3;i++)
	{
		for( int a=0; a<3; a++)
		{
			sum+=arr[i][a];
		}
	}
	printf("%d",sum);
	return 0;
 } 
