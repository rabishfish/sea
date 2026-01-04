#include<stdio.h>
void add(int hang , int lie , int arr[][3] , int brr[][3])
{
	for(int i = 0; i<hang; i++)
	{
		for(int j = 0; j<lie; j++)
		{
			arr[i][j]+=brr[i][j];
		}
	}
} 

void print(int hang , int lie ,  int arr[][3])
{
	for(int i=0; i<hang; i++)
	{
		for(int j=0; j<lie; j++)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[2][3]={
	{1,2,3},
	{5,6,7}
	};
	int brr[2][3]={
	{4,5,6,},
	{8,9,10}
    };
    print(2,3,arr);
    printf("\n");
    print(2,3,brr);
    add(2,3,arr,brr);
    printf("\n");
    print(2,3,arr);
    return 0;
}
