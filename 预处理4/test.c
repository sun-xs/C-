#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#define MAX 100;
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//	return 0;
//}

//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	//int ret = SQUARE(5);
//	//printf("%d\n", ret);
//	
//	int ret = SQUARE(5 + 2);
//	printf("%d\n", ret);
//	
//	
//	return 0;
//}

//#define DOUBLE(B) ((B)+(B))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("%d\n", ret);
//
//	return 0;
//}

//void print(int x)
//{
//	printf("the value of a is %d\n", x);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//
//	print(a);
//	print(b);
//
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

#define CAT(X,Y) X##Y	
// ## 可以把位于它两边的符号合成一个符号，它允许宏定义从分离的文本片段中创建标识符。

int main()
{
	int  Class84 = 2022;
	printf("%d\n", CAT(Class, 84));

	return 0;
}