#include<stdio.h>
#include<string.h>
int main()
{
	printf("ÇëÊäÈë×Ö·û´®£º");
	char str1[100],ch,str2[100];
	int j=0;
	fgets(str1,sizeof(str1),stdin);
	printf("ÇëÊäÈëÒªÉ¾³ıµÄ×Ö·û£º");
	scanf("%c",&ch);
	for(int i=0; str1[i]!='\0'&&str1[i]!='\n';i++)
	{
		if(str1[i]!=ch)
		{
			str2[j]=str1[i];
			j++;
		 } 
	}
	printf("É¾³ıºóµÄ×Ö·û´®Îª£º%s",str2) ;
	return 0;
} 
