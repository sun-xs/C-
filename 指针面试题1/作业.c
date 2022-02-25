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
//	//打印
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

//int* func(int a,int b)	//函数声明
//int(*) func(int a,int b)	//err
//int(*func)(int a,int b)	//函数指针
//(int*) func(int a,int b)	//函数声明



//实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDBA
//旋转字符串

//void left_move(char arr[], int k)
//{
//
//}
#include <string.h>
#include <assert.h>

//1.暴力求解法
//void left_move(char* arr, int k)
//{	
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋字符
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

//2.三部翻转法
//ab cdef
//ba fedc	//两边都逆序
//cdef ba   再逆序

//逆序字符串的函数
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
	reverse(arr,arr+k-1);	//逆序左边
	reverse(arr+k,arr+len-1);	//逆序右边
	reverse(arr,arr+len-1);	//逆序整体
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 5);
	printf("%s\n",arr);
	return 0;
}