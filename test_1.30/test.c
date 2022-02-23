#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	//写一个函数，求a二进制（补码）表示中有几个1
//	int count = count_bit_one(a);
//	//13
//	//00000000 00000000 00000000 00001101
//
//	printf("count=%d\n", count);
//
//	return 0;
//}


//两个整数二进位不同个数
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0; 
//	int n = 0;
//	scanf_s("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count =%d\n", count);
//
//	return 0;
//}

//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//
//}
//int main()
//{
//	int a=Fun(2);
//	printf("%d\n", a);
//	return 0;
//
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefgh";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//写一个递归函数DigitSum(n),输入一个非负整数,返回组成它的数字之和
//例如，调用DigitSum（1729），则返回1+7+2+9，它的和是19
int digitsum(unsigned int num)
{
	if (num > 9)
	{
		return digitsum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}

int main()
{
	unsigned int num = 0;
	scanf_s("%d", &num);
	int ret = digitsum(num);
	printf("%ret =%d\n", ret);

	return 0;

}

