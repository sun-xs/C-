#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}


void test1()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof((s[0]));
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
	test1();
	
	return 0;
}