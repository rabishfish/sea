#include<stdio.h>
int main()
{
	int arr[]={77,67,46,89,99,78};
	int count = 0;
	for(int i = 0; i<= 5; i++)
	{
		if(arr[i]>50)
		count+=1;
	 } 
	printf("大于50的元素个数：%d\n",count);
	return 0;
 } 
