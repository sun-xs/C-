#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//交换两个整形变量，不使用第三个变量
//	int a = 3;
//	int b = 5;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	//a = a + b;	
//	//b = a - b;
//	//a = a - b;
//
//	a = a ^ b;
//	b = a ^ b;	// ^ 按（二进制）位异或，相同为0，相异为1
//	a = a ^ b;	//不会溢出，没有使用第三个变量
//
//	//  a=3		011	110	110	101
//	//	b=5		101	101	011	011
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

int main()
{
    int arr[] = { 1,1,2 };
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < sz; i++)
    {
        int count = 0;
        int j = 0;
        for (j = 0; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d\n", arr[i]);
            break;
        }
    }
    return 0;
}