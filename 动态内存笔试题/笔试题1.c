#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//����ջ�ռ��ַ������

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//int* test()
//{
//	//static int a=10;//��̬��
//	int a = 10;//ջ��
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);	//free�ͷ�strָ��Ŀռ�󣬲������str����NULL
//	str = NULL;	//�Ľ�
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
