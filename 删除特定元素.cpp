#include<stdio.h>
int main()
{
	int arr[]={2,5,8,5,1,5,9};
	int size =7;
	int target =5;
	int newSize = 0;
	for(int a = 0; a<size; a++)
	{
		if(arr[a]!=target)
		{
			arr[newSize]=arr[a];
			newSize++;
		}
	}
	
	printf("删除后的数组；");
	for(int i = 0; i<newSize; i++)
	{
		printf("%d,",arr[i]);
	}
	return 0;
}
