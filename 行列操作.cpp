#include<stdio.h>
int main()
{
	int arr[4][4]={
	{5,8,2,1},
	{3,9,4,7},
	{6,2,8,3},
	{1,4,5,9}
	};
	int hang;
	int lie;
	int max = arr[0][0];
	int h,l; 
	for(int i=0; i<4; i++)
	{
		for(int a=0; a<4; a++)
		{
			hang+=arr[i][a];
		}
		printf("第%d行的和%d\n",(i+1),hang);
		hang=0;
	}
	
		for(int i=0; i<4; i++)
	{
		for(int a=0; a<4; a++)
		{
			lie+=arr[a][i];
		}
		printf("第%d列的和%d\n",(i+1),lie);
		lie = 0; 
	}
		for(int i=0; i<4; i++)
	{
		for(int a=0; a<4; a++)
		{
			if(max<=arr[i][a])
			{
				max=arr[i][a];
				h = i;
				l = a;
			}
		}
	}
	printf("最大值为%d,第%d行，第%d列",max,h,l);
	return 0;
}
