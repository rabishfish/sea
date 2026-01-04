#include<stdio.h>
int main()
{
	int day;
	printf("请输入数字：");
	scanf("%d",&day);
	switch(day){
		case 1:
		case 2:
	    case 3:
	    case 4:
		case 5:
		   printf("这是工作日。");
		   break;
		default:
			printf("这是休息日。");
			break;
		}
    return 0; 
 } 
