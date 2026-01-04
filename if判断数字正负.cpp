#include<stdio.h>
int main()
{
	double numble;
	printf("请输入数字");
	scanf("%lf",&numble);
	if(numble<0){
		printf("这是负数。");
	}else if(numble==0){
		printf("这是0。");
	}else{
		 printf("这是正数。"); 
		}
	return 0;
}
