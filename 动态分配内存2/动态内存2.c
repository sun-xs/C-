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
//	//������ʹ��malloc���ٵ�20���ֽڿռ�
//	// �������20���ֽڿռ䲻����������ʹ����
//	// ϣ�������ܹ���40���ֽڿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ� 
//
//	//reallocʹ��ע�����
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//�����Ķ�̬�ڴ����

//1.�Կ�ָ��Ľ����ò���

//int main()
//{
//	int* p = (int*)malloc(40);
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
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

//2.�Զ�̬���ٵ��ڴ��Խ�����
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

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
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

//4.ʹ��free�ͷŶ�̬�����ڴ��һ����

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
//	//���տռ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ����ͷ�

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ��
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	//....
//	free(p);
//
//	return 0;
//}

//6.��̬�����ڴ������ͷţ��ͷ�й¶��
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

