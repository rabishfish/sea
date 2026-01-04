#include<stdio.h>
void printMatrix(int arr[][3],int rows)
{
	for(int i = 0; i<rows; i++)
	{
		for(int j =0; j<3; j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
int main()
	{
		int maxtrix[2][3] ={{1,2,3},{4,5,6}};
		printMatrix(maxtrix,2);
		return 0; 
	}
