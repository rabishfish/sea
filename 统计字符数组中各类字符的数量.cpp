#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int j=0;
	int ch=0, kong=0;
	int qita=0;
	printf("请输入字符串");
	char str[100];
	fgets(str,sizeof(str),stdin);
	
	for(int i=0; str[i]!='\0'&&str[i]!='\n'; i++)
	{
		if(isdigit(str[i]))
		{
			j++;
		}
		else if(isalpha(str[i]))
		{
			ch++;
		}
		else if(str[i]==' ')
		{
			kong++;
		}else
		{
			qita++;
		}
		
	 } 
	
	printf("其中数字有：%d个, 字母有%d个， 空格有%d个, 其他有%d个",j,ch,kong,qita); 
	return 0;
 } 
