#include<stdio.h>
int main()
{
	int arr[]={64,364,25,12,22,11,90};
	int size = 7;
	for(int a=0; a<size-1; a++)
	{
		for(int b = 0; b<size-1; b++)
		{
			if(arr[b]>arr[b+1])
			{
				int temp = arr[b];
			    arr[b]=arr[b+1];
			    arr[b+1]=temp;
			}
			
		}
	
    }
	printf("排序后的数组：");
	for(int i = 0;i<size;i++)
	{
		printf("%d,",arr[i]);
	}
	return 0;
}
