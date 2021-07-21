//#include<stdio.h>
//int binnary_search( int arr[],int goal,int size)
//{
//	int mid;
//	int left = 0;
//	int right=size-1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > goal)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid] < goal)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int ret;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	ret = binnary_search(arr, k,size);
//	if (ret == -1)
//	{
//		printf("没有找到\n");
//	}
//	else
//	{
//		printf("下标为:%d", ret);
//	}
//	return 0;
//}