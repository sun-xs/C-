#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main()
{
	//int c;	//ע�⣺int,��char,Ҫ����EOF

	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
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