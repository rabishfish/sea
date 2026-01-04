#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100], str2[100];
	int j=0,cout=0;
	printf("请输入字符串：");
	fgets(str1, sizeof(str1),stdin);
	for(int i=0; str1[i]!='\0'&&str1[i]!='\n';i++)
	{
		cout++;
	}
	for(int i=cout-1; i>=0; i-- )
	{
		str2[j]=str1[i];
		j++;
	}
	printf("反转后的字符串为：%s",str2);
	return 0;
 } 
