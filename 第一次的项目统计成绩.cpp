#include<stdio.h>
#define STUDENTS 3
#define SUBJECTS 3

void clearInputBuffer()
{
	while(getchar()!='\n');
}

void print(int arr[STUDENTS][SUBJECTS])
{
	printf("成绩表：\n");
	printf("学生\\科目\t科目1\t科目2\t科目3\n");//两个\t是为了保证格式// 
	for(int i=0; i<STUDENTS; i++)
	{
		printf("学生%d\t\t",i+1);
		for(int j=0; j<SUBJECTS; j++)
	{
		printf("%d\t",arr[i][j]);
	}
	printf("\n");
	}
}

void average_St(int n,int arr[STUDENTS][SUBJECTS])
{
	if(n<1||n>STUDENTS)
	{
		printf("学生编号错误！\n");
	}
	int sum=0;
	for(int i=0; i<SUBJECTS; i++)
	{
	 sum+=arr[(n-1)][i];
	}
	float average= (float)sum/SUBJECTS; //用小数计算的更准确// 
	printf("第%d位学生的平均成绩为：%.2f\n",n,average);
}

void average_Su(int n, int arr[STUDENTS][SUBJECTS])
{
	if(n<1||n>STUDENTS)
	{
		printf("科目编号错误！\n");
		return; 
	}
	int sum=0;
	for(int i=0; i<SUBJECTS; i++)
	{
		 sum+=arr[i][(n-1)];//考虑实际数字和在数组里的位置// 
	}
	float average=(float)sum/STUDENTS;
	printf("第%d学科的平均成绩为：%.2f\n",n,average);
}

void Found_Max(int arr[STUDENTS][SUBJECTS])
{
	int max=arr[0][0];
	int maxStudent= 1;
	int maxSubject = 1; 
	for(int i=0; i<STUDENTS; i++)
	{
		for(int j=0; j<SUBJECTS; j++)
		{
			if(max<arr[i][j])
			{
				max=arr[i][j];
				maxStudent = i+1;
				maxSubject = j+1; 
			}
		}
	}
	printf("最高分为%d，是第%d位学生的第%d学科\n",max,maxStudent,maxSubject);
}

void Found_Min(int arr[STUDENTS][SUBJECTS])
{
	int min=arr[0][0];
	int minStudent= 1;
	int minSubject = 1; 
	for(int i=0; i<STUDENTS; i++)
	{
		for(int j=0; j<SUBJECTS; j++)
		{
			if(min>arr[i][j])
			{
				min=arr[i][j];
				minStudent = i+1;
				minSubject = j+1; 
			}
		}
	}
	printf("最低分为%d，是第%d位学生的第%d学科\n",min,minStudent,minSubject);
}
int main()
{
  int arr[STUDENTS][SUBJECTS];
  printf("请输入3位学生的3科成绩：\n");
  for(int i=0; i<STUDENTS; i++)
  {
  	printf("请输入第%d位学生的3科成绩（用空格分隔：）",i+1);
	for(int j =0 ; j<SUBJECTS; j++)
	{
		scanf("%d",&arr[i][j]); 	
	}
	clearInputBuffer();
  }
  printf("\n");
  print(arr);
  printf("\n");
  printf("请输入要查询的平均分的学生编号(1-%d)：",STUDENTS);
  int n;
  scanf("%d",&n);
  clearInputBuffer();
  average_St(n,arr);
  printf("请输入要查询平均分的科目编号(1-%d)",SUBJECTS);
  int m;
  scanf("%d",&m);
  clearInputBuffer();
  average_Su(m,arr);
  printf("\n");
  Found_Max(arr);
  Found_Min(arr);
  return 0; 
 } 
//耗时两个小时没招了// 
