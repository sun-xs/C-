#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//1.定位文件指针
	//fseek(pf, -2, SEEK_END);
	int ch=fgetc(pf);
	printf("%c\n", ch);
	//int pos = ftell(pf);
	//printf("%d\n", pos);
	rewind(pf);	//让文件回到起始位置
	ch = fgetc(pf); 
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;

	return 0;
}

