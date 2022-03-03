#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main()
{
	//int c;	//注意：int,非char,要求处理EOF

	//strerror - 把错误码对应的错误信息的字符串地址返回
	//printf("%s\n", strerror(errno));

	//perror
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("hehe");
		return 0;
	}
	fclose(pf);
	pf = NULL;

	return 0;
}