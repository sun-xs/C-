#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//
//	//就是在使用malloc开辟的20个字节空间
//	// 假设这里，20个字节空间不能满足我们使用了
//	// 希望我们能够有40个字节空间
//	//这里就可以使用realloc来调整动态开辟的内存 
//
//	//realloc使用注意事项：
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接受realloc函数的返回值
//
//	int* ptr= realloc(p, 4000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//常见的动态内存错误

//1.对空指针的解引用操作

//int main()
//{
//	int* p = (int*)malloc(40);
//	//万一malloc失败了，p就被赋值为NULL
//	*p = 0;//err
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//err
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.对动态开辟的内存的越界访问
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//4.使用free释放动态开辟内存的一部分

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//回收空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.对同一块动态内存多次释放

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	p = NULL;
//
//	//....
//	free(p);
//
//	return 0;
//}

//6.动态开辟内存忘记释放（释放泄露）
//#include<windows.h>

//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		//Sleep(1000);
//	}
//	return 0;
//}

