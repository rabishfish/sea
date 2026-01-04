#include<stdio.h>
int main()
{
	int matrix[3][4] = {
	{5,3,2,8},
	{4,2,6,11},
	{7,9,5,12}
	};
	int found = 0; 
	for(int i = 0; i<3; i++)
	{
		int max_in_row = matrix[i][0];
		int col_index = 0;
		for(int j =1; j<=4; j++)
		{
			if(matrix[i][j]>max_in_row)
			{
				max_in_row = matrix[i][j];
				col_index = j;
			}
		}
		int is_min_in_col = 1;
		for(int k= 0; k<3; k++)
		{
			if(matrix[k][col_index]<max_in_row)
			{
				is_min_in_col =0;
				break;
			}
		}
		
		if(is_min_in_col)
		{
			printf("找到鞍点：%d,位置：[%d][%d]",max_in_row,i,col_index);
			found=1; 
		}
    }
    	if(!found)
		{
		   printf("没有找到鞍点。\n");
	    }
	return 0;
}
