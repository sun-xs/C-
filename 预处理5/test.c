#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//	int a = 10;
//	int b = a + 1;	//1
//	int b = ++a;	//2
//
//	return 0;
//}

//���и����õĺ����

//��
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
////����
//float Max(float x, float y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	float a = 3.02f;
//	float b = 4.02f;
//
//	//�����ڵ��õ�ʱ����к������úͷ��صĿ���
//
//	float max = Max(a, b);
//	printf("%lf\n", max);
//
//	//Ԥ����׶ξ�������滻
//	//û�к����ĵ��úͷ��صĿ���
//
//	max = MAX(a, b);
//	printf("%lf\n", max);
//
//
//	//int a = 10;
//	//int b = 11;
//	//int max = MAX(a++, b++);
//	////int max=((a++)>(b++)?(a++):(b++));
//
//	//printf("%d\n", max);	//12
//	//printf("%d\n", a);		//11
//	//printf("%d\n", b);		//13
//
//	return 0;
//}

//�ŵ�

//��Ⱥ����ڳ���Ĺ�ģ���ٶȷ����ʤһ��
//���������޹ص�
//���Դ�����

//ȱ��

//���볤��
//�޷�����
//�����Ͻ�
//���ܻ������������ȼ����⣬���׳���
//���ܵݹ� 

//
//#define TEST(x,y) printf("test\n")
//
//int main()
//{
//
//	TEST();
//	TEST();
//	TEST();
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//
//	return 0;
//
//}

#define MAX 100
int main()
{
	printf("MAX = %d\n", MAX);
#undef MAX
	printf("MAX = %d\n", MAX);
	return 0;
}