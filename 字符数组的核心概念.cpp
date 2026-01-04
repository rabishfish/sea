#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[5]={'H','i','!','!'};
	char arr2[5]={'H','i','\0'};
	char str[]="Hello";
	
	printf("sizeof(str) = %lu\n",sizeof(str));
	printf("strlen(str) = %lu\n",strlen(str));
	
	return 0;
 } 
