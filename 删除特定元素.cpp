#include<stdio.h>
int main()
{
	int arr[]={2,5,8,5,1,5,9,3,0,1,0,4,4,7};
	int size =14;
	int target;
	printf("请输入你想要删除的数字：");
	scanf("%d",&target);
	int newSize = 0;
	for(int a = 0; a<size; a++)
	{
		if(arr[a]!=target)
		{
			arr[newSize]=arr[a];
			newSize++;
		}
	}
	
	printf("删除后的数组；");
	for(int i = 0; i<newSize; i++)
	{
		printf("%d,",arr[i]);
	}
	return 0;
}
