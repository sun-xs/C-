#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ʮ�����е����ֵ
//int main()
//{
//	int arr[] = { -1,5,-6,0,53,-99,50,12,-45,-16 };
//	int max = arr[0];	//���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i < 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//9*9�˷���

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <=9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t ", i, j, i*j);
//			
//		}
//		printf("\n");
//		
//	}
//		
//	
//	return 0;
//}
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()- ִ��ϵͳ�����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n ������>:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)	//�Ƚ������ַ���-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

