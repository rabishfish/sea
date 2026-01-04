#include<stdio.h>
int main()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	for(int i;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n"); 
	}
	return 0;
}
