#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//4×Ö½ÚÆ«ÒÆ

struct A
{
	int a;//0-3
	short b;//4-5
	//6-7
	int c;//8-11
	char d;//12
	//13 14 15
};//13 -->16

struct B
{
	int a;//0-3
	short b;//4-5
	char c;//6
	//7
	int d;//8-11
};//12

int main()
{
	printf("%zd\n", sizeof(struct A));
	printf("%zd\n", sizeof(struct B));
	return 0;
}