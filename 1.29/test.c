#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen -���ַ�������
//	//�ݹ� - ģ��ʵ����strlen - �����ķ�ʽ1���ݹ�ķ�ʽ2
//
//	char arr[] = "holoa";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;	//����ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	return 0;
//}



int main()
{
	int a = 10, b = 20, c = 30,i=0;
	int* arr2[3] = { &a,&b,&c };	//ָ������
	
	for (; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}