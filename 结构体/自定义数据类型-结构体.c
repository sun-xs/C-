#define _CRT_SECURE_NO_WARNINGS 1


//����һ���ṹ������
//����һ��ѧ�����ͣ������ѧ������������ѧ������������
//����ѧ��������+����+�绰+�Ա�+����
//
//struct Stu
//{
//	char name[20];	//����
//	char tele[12];	//�绰
//	char sex[10];	//�Ա�
//	int age;	//����
//}s4,s5,s6;
//struct Stu s3;	//ȫ�ֱ���
//int main()
//{
//	//�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//�ṹ���������
//struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//};
//
//typedef struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//}Node;	//Node ������
//int main()
//{
//	struct Node n1;
//	Node n2;
//
//	return 0;
//}

#include <stdio.h>

//struct S3
//{
//	double d;
//	char c;
//	int i;
// };
//struct S4
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	/*struct S3 s3;
//	printf("%zd\n", sizeof( s3));*/
//	struct S4 s4;
//	printf("%zd\n", sizeof(s4));
//	return 0;
//}

//����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S
//{
//	char a;
//	double b;
//	
//};
//#pragma pack()
//ȡ�����õ�Ĭ�϶�����

#include<stdio.h>
#include<stddef.h>
struct S
{
	char a;
	int b;
	double c;

};
int main()
{
	/*struct S s1;
	printf("%zd\n", sizeof(s1));*/

	//offsetof()
	printf("%zd\n", offsetof(struct S,a));
	printf("%zd\n", offsetof(struct S,b));
	printf("%zd\n", offsetof(struct S,c));

	return 0;
}

//�ṹ�崫��ʱ��Ҫ���ṹ��ĵ�ַ����