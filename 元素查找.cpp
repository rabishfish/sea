#include<stdio.h>
int main()
{
	int arr[] = {12,45,67,23,32,89};
	int target = 23;
	int position = -1;
	for(int i=0 ; i<=5;  i++)
	{
		if(arr[i]==23)
		{
			position = i;
			break; 
		}
	}
	
	if(position !=-1)
	{
		printf("找到数字%d，位置%d\n",target,position);
	}else{
		printf("数字%d未找到\n",target);
	}
	return 0;
}
