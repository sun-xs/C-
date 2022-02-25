#define _CRT_SECURE_NO_WARNINGS 1


//声明一个结构体类型
//声明一个学生类型，是想过学生类型来创建学生变量（对象）
//描述学生：属性+名字+电话+性别+年龄
//
//struct Stu
//{
//	char name[20];	//名字
//	char tele[12];	//电话
//	char sex[10];	//性别
//	int age;	//年龄
//}s4,s5,s6;
//struct Stu s3;	//全局变量
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//结构体的自引用
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
//}Node;	//Node 类型名
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

//设置默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char a;
//	double b;
//	
//};
//#pragma pack()
//取消设置的默认对齐数

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

//结构体传参时，要传结构体的地址更好