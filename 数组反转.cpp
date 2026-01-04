#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int size = 5;
	for(int a=0 ; a<size/2;a++)
	{
		int temp = arr[a];
		arr[a]=arr[4-a];
		arr[4-a]=temp;
	}
	for(int i=0; i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0; 
 } 
