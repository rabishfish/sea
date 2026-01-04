#include<stdio.h>
int main()
{
	int i;
	printf("接下来会打印所以能被三整除的数字。");
	for(i==1;i<=100;i++)
	{
		if(i%3!=0)
		{
			continue; 
		 } 
	    printf("%d ",i);
	 } 
	 return 0 ;
}
