#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{ 
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

//int* func(int a,int b)	//��������
//int(*) func(int a,int b)	//err
//int(*func)(int a,int b)	//����ָ��
//(int*) func(int a,int b)	//��������



//ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDBA
//��ת�ַ���

//void left_move(char arr[], int k)
//{
//
//}
#include <string.h>
#include <assert.h>

//1.������ⷨ
//void left_move(char* arr, int k)
//{	
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//�����ַ�
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//}

//2.������ת��
//ab cdef
//ba fedc	//���߶�����
//cdef ba   ������

//�����ַ����ĺ���
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr,arr+k-1);	//�������
	reverse(arr+k,arr+len-1);	//�����ұ�
	reverse(arr,arr+len-1);	//��������
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 5);
	printf("%s\n",arr);
	return 0;
}