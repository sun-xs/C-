#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//����������1��������������0
//int is_prime(int n)
//{
//	// 2 -> n-1
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨��ʵ��
//	
//	int left = 0; 
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;		//�м�Ԫ�ص��±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	return -1;
//}
//
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˾ͷ�����������±꣬û�ҵ��ͷ���-1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	printf("66\n");
//	main();
//	return 0;
//}


//void print(int n) //1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); //1234
//	//�ݹ�
//
//	print(num);
//	return 0;
//}

//#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}


//�ݹ�ķ���
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//�Ѵ��»�С
//my_strlen("byte")
//1+my_strlen("yte")
//1+1+my_strlen("te")
//1+1+1+my_strlen("e")
//1+1+1+1+my_strlen("")
//1+1+1+1+0
//4

//int main()
//{
//	char arr[] = "byte";
//	//int len = strlen(arr); ���ַ�������
//	//printf("%d\n", len);
//	
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);		//arr�����飬���鴫�Σ�����ȥ�����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n", len);
//	
//	
//	return 0;
//}


//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n); //ѭ���ķ�ʽ
//	printf("%d\n", ret);
//
//	return 0;
//}

//쳲���������
//1 1 2 3 5 8 13 21 34 55 ...
//

//������n��쳲���������ʱ��

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b; 
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	//TDD - ������������
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
 //
//	return 0;
//}


void bubble_sort(int arr[],int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;	//������һ��Ҫ����������Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;	//���������������ʵ����ȫ����
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//��arr���������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);	//ð��������
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}