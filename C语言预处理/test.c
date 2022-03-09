#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}