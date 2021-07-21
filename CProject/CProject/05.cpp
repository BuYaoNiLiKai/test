//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[1000];
//	int i,goal,j,count=0;
//	j = 1000;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = i + 1;
//	}
//	printf("请输入想要查找的数字:" );
//	scanf("%d", &goal);
//	i = 0;
//	while ( i<=j)
//	{
//		count++;
//		if (a[(i + j)/2] < goal)
//		{
//			i = (i + j)/2+1;
//		}
//		if (a[(i + j) / 2] > goal)
//		{
//			j =(i + j)/2-1;
//		}
//		if (a[(i + j) / 2] == goal)
//		{
//			printf("找到了,下标为:%d\n", ((i + j) / 2));
//			printf("查找次数%d", count);
//			break;
//		}
//	}
//}