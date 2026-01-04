#include<stdio.h>
int main()
{
	int arr[] = {12,45,23,67,34};
	int sum = 0;
	float average;
	for(int i=0; i<=4; i++)
	{
		sum+=arr[i];
	}
	average=sum/5;
	printf("总和：%d\n",sum);
	printf("平均值：%2.f\n",average);
	return 0;
}
