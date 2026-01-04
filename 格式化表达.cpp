#include<stdio.h>
int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d",&num);
	if(num>0) {
		printf("这是正数");
	} else if (num==0){
		printf("这是0"); 
	} else{
		printf("这是负数"); 
	}
	return 0;		
 }                                   
