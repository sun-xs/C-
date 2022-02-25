#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));  //2,5
//
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//
////假设p的值为0×100000。如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("p\n", p + 0x1);	//0x00100014
//	printf("p\n", (unsigned long)p + 0x1);	//0x00100001
//	printf("p\n", (unsigned int*)p + 0x1);	//0x00100004
//
//	return 0;
//}
//
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);	//4,2
//	return 0;
//}
//
//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};	//逗号表达式, 存放的是 1，3，5
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//
//	return 0;
//}

//地址-地址，得到的是两个地址之间的元素个数
