#include<stdio.h>
int main()
{
	int original[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int rotated[3][3];
	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
		    rotated[i][j]=original[2-j][i];	
		}
	}
	
	printf("Ô­¾ØÕó£º\n");
	for(int i = 0;i<3;i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d",original[i][j]);
		}
		printf("\n");
	}
	printf("Ðý×ªºó£º\n");
	for(int i = 0;i<3; i++)
	{
		for(int j = 0;j<3; j++)
		{
			printf("%d",rotated[i][j]);
		}
		printf("\n");
	}
	return 0;
 } 
