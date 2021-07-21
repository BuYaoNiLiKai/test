#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu
{
	int id;
	int sid;
};
int main()
{
	printf("%d", sizeof(Stu));
	return 0;
}