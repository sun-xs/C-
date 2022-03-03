#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//perror
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}
	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf(" end of file\n");
	}

	fclose(pf);
	pf = NULL;

	return 0;
}