#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//������1

//1.���д���������ֱ���������
//2.��������ڴ�й¶������
//str��ֵ���ݵ���ʽ��p��p��GetMemory�������βΣ�ֻ�ں����ڲ���Ч
//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ����Ի�����ڴ�й¶

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");	
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

