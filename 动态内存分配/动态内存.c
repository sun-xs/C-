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
//	//struct S arr[50];	//50��struct S ���͵�����
//
//	return 0;
//}



//��̬�ڴ����

//malloc
//free
//calloc
//realloc

//C�����ǿ��Դ����䳤����  -C99��������

#include<string.h>
#include <stdlib.h>
//#include<errno.h>
//
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(40);
//	//int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
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
//		//��ӡ����ԭ���һ����ʽ
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٿռ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//������̬���ٿռ�Ĵ�С

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
		//������ʹ��malloc���ٵ�20���ֽڿռ�
		// �������20���ֽڿռ䲻����������ʹ����
		// ϣ�������ܹ���40���ֽڿռ�
		//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ� 
		
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