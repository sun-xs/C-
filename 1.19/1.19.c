#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "fantastic";
//	char arr2[20] = "#$@$@@$$@";
//	strcpy(arr2, arr1);
//  	printf("%s\n", arr2);
//
//	return 0;
//
//}

//memset
//memory ÄÚ´æ set ÉèÖÃ
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	//***** world
	return 0;
}