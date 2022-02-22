#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if (((year % 4 == 0 && year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		};
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//1-100中9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//
//	}
//	//9 19 29 39 ...99
//	//90 91 92 93 94 ... 99
//
//	printf("count=%d\n ", count);
//
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值,打印结果。

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum+=flag* 1.0 / i;
//		flag = -flag;
//
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

