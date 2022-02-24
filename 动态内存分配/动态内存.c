#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//struct S
//{
//	char name[20];
//	int age
//};
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n];
//	//struct S arr[50];	//50个struct S 类型的数据
//
//	return 0;
//}



//动态内存分配

//malloc
//free
//calloc
//realloc

//C语言是可以创建变长数组  -C99中增加了

#include<string.h>
#include <stdlib.h>
//#include<errno.h>
//
//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	//int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i=0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i=0; i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	
// 	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟空间的
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//调整动态开辟空间的大小

int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
		//就是在使用malloc开辟的20个字节空间
		// 假设这里，20个字节空间不能满足我们使用了
		// 希望我们能够有40个字节空间
		//这里就可以使用realloc来调整动态开辟的内存 
		
	int* p2 = realloc(p, 40);
	int i = 0;
	for (i = 5; i < 10; i++)
	{
		*(p2 + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p2 + i));
	}

	return 0;
}