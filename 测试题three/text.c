#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	//int a = 5 / 2;//����  ��2��1
//	//printf("a = %d\n", a);
//	double a = 5 / 2.0;
//	printf("a=%lf", a);
//	return 0;
//
//}
//
//int main()
//{
//	int a = -1;
//	// >> ���Ʋ�����
//	// �ƶ����Ƕ�����λ
//	//00000000 00000000 00000000 00010000 
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//��һ�������洢���ڴ��еĶ�����1�ĸ���
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);	//3 - 011
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d", count);
//
//	//ͳ��num�Ĳ������м���1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//
//	}
//
//
//	printf("%d", count);*/
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char b = 'w';
//	int arr[10] = { 0 };
//
//	printf("%d\n", a);
//	/*printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));*/
//
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%zd\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	printf("%d\n", ++a); //��++,��ʹ��
//	return 0;
//
//}

void test1(int arr[])
{
	printf("%zd\n", sizeof(arr));//(3)
}
void test2(char ch[])
{
	printf("%zd\n", sizeof(ch));//(4)
}

//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%zd\n", sizeof(arr));//(1)
//	printf("%zd\n", sizeof(ch));//(2)
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20, max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//
//	max=(a > b ? a : b);
//	printf("%d\n", max);
//
//
//	/*b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);*/
//	
//	return 0;
//}

//����һ���ṹ������struct Stu
//struct Stu 
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "�ϴ�",20,"B19160237" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000 00000000 00000000 00000011
//	//00000011	a
//
//	char b = 127;
//	//00000000 00000000 00000000 01111111
//	//01111111	b
//	char c = a + b;
//	
//	//a��b������
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000000 10000010
//
//
//	//10000010	c
//	//11111111 11111111 11111111 10000010 ����
//	//11111111 11111111 11111111 10000001 ����
//	//10000000 00000000 00000000 01111110 Դ�� -126
//
//	printf("%d\n", c);
//
//	return 0;
//
//}

int main()
{
	//char c = 1;
	//printf("%u\n", sizeof(c));	//1
	//printf("%u\n", sizeof(+c));	//4
	//printf("%u\n", sizeof(!c));	//1

	int c = 5;
	int a=c + --c;
	printf("%d\n", a);

	return 0;
}