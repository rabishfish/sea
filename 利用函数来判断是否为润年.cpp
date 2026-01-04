#include<stdio.h>
int is_leap_year(int year)
{
	if(year%4==0&&year%100!=0||year%400==0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	for(int y=2000;y<=2025;y++)
	{
		int ret = is_leap_year(y);
		if(ret==1)
		{
			printf("%d is_leap_year\n",y);
		}
	}
	return 0;
}
