#include<stdio.h>
void Found_Max(int a, int b, int arr[][3])
{
	int max = arr[0][0];
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
		{
			if(max<=arr[i][j])
			max=arr[i][j];	
		}
	}
	printf("最大值为：%d\n",max);
}
int main()
{
	int arr[2][3]={
	{20,5,9},
	{9,14,12}
	};
	Found_Max(2, 3, arr);
	return 0;
}
