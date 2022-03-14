#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//	int a = 10;
//	int b = a + 1;	//1
//	int b = ++a;	//2
//
//	return 0;
//}

//带有副作用的宏参数

//宏
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
////函数
//float Max(float x, float y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	float a = 3.02f;
//	float b = 4.02f;
//
//	//函数在调用的时候会有函数调用和返回的开销
//
//	float max = Max(a, b);
//	printf("%lf\n", max);
//
//	//预处理阶段就完成了替换
//	//没有函数的调用和返回的开销
//
//	max = MAX(a, b);
//	printf("%lf\n", max);
//
//
//	//int a = 10;
//	//int b = 11;
//	//int max = MAX(a++, b++);
//	////int max=((a++)>(b++)?(a++):(b++));
//
//	//printf("%d\n", max);	//12
//	//printf("%d\n", a);		//11
//	//printf("%d\n", b);		//13
//
//	return 0;
//}

//优点

//宏比函数在程序的规模和速度方面更胜一筹
//宏是类型无关的
//可以传类型

//缺点

//代码长度
//无法调试
//不够严谨
//可能会带来运算符优先级问题，容易出错
//不能递归 

//
//#define TEST(x,y) printf("test\n")
//
//int main()
//{
//
//	TEST();
//	TEST();
//	TEST();
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//
//	return 0;
//
//}

#define MAX 100
int main()
{
	printf("MAX = %d\n", MAX);
#undef MAX
	printf("MAX = %d\n", MAX);
	return 0;
}