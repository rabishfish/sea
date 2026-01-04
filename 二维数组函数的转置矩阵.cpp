#include<stdio.h>
void turned(int hang, int lie , int arr[][3] , int brr[][3])
{
	for(int i = 0; i<hang; i++)
	{
		for(int j = 0;  j<lie ; j++)
		{
			brr[i][j]=arr[j][i];
		}
	 } 
 } 
void print(int hang , int lie , int crr[][3] )
{
	for(int a = 0;  a<hang;  a++)
	{
		for(int b= 0 ;  b<lie;  b++)
		{
			printf("%d ",crr[a][b]);
		}
		printf("\n"); 
	}
}
int main()
{
	int arr[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int brr[3][3];
	print(3,3,arr);
	turned(3,3,arr,brr);
	printf("\n"); 
	print(3,3,brr);
	return 0;
}
