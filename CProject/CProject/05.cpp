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
//	printf("��������Ҫ���ҵ�����:" );
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
//			printf("�ҵ���,�±�Ϊ:%d\n", ((i + j) / 2));
//			printf("���Ҵ���%d", count);
//			break;
//		}
//	}
//}