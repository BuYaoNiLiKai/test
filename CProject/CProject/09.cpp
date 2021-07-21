//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num;
//	int count = 0;
//	scanf("%d", &num);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((num>>i)&1)== 1)count++;
//	}
//	printf("%d\n", count);
//	printf("%d\n", count_bit_one(num));
//}