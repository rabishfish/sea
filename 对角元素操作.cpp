#include<stdio.h>
int main()
{
	int matrix[4][4]={
	{1,2,3,4}, 
	{5,6,7,8}, 
	{9,10,11,12},
	{13,14,15,16}
	};
	int sum1 = 0,  sum2 = 0;
	for(int i = 0; i<4;i++)
	{
		sum1+=matrix[i][i];
	}
	printf("主对角线的和为： %d",sum1);
for(int i = 0; i<4;i++)
	{
	    sum2+=matrix[i][3-i];	
    }
    printf("副对角线的和为：%d",sum2);
	return 0;
 } 
