#include<stdio.h>
int add(int a, int b)
{
	int ret = a+b;
	return ret;
}
int main()
{
	int x;
	int y;
	printf("请输入两个数：");
	scanf("%d,%d",&x,&y);
	int a= add(x,y);
	printf("%d",a);
	return 0; 
}
