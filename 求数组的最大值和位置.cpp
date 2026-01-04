#include<stdio.h>
int main()
{
	int arr[]={34,12,89,102,23};
	int max,position;
	max = arr[0]; 
	for(int i; i<=4;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
			position = i;
		}
		
	}
	printf("最大值：%d,位置：%d\n",max,position);
	return 0; 
}
