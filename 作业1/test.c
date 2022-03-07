#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

typedef struct {
	int a;//0-3 4
	char b;//4  1
	//5
	short c;//6-7  2
	short d;//8-9 2
	//10-11
}AA;
int main()
{
	printf("%zd\n", sizeof(AA));
	return 0;
}