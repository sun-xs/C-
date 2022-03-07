#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#pragma pack(4)/*编译选项，表示4字节对齐 */

int main(int argc,char* argv[])
{

	struct tagTest1
	{
		short a;//0-1
		char b;//2-3
		long c;//4-7
		long d;//8-11

	};//12


	struct tagTest2
	{
		long aa;//0-3
		short bb;//4-5
		char cc;//6-8

		long dd;//8-11

	};//12
	

	struct tagTest3
	{
		short aaa;//0-1
		//2 3 
		long bbb;//4-7
		char ccc;//8-10
		//11 
		long ddd;//12-15

	};//16
	
	struct tagTest1 s1;
	struct tagTest2 s2;
	struct tagTest3 s3;

	printf("%zd\n", sizeof(s1));
	printf("%zd\n", sizeof(s2));
	printf("%zd\n", sizeof(s3));

	return 0;

}
#pragma pack()