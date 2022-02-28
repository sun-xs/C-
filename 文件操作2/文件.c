#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>

//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//.. 表示上一级路径
//	//. 表示当前路径
//	/*fopen("../test.txt", "r");
//	fopen("test.txt", "r");*/
//
//	//绝对路径写法
//	//fopen("E:\\C语言项目存放\\文件操作2\\test.txt", "r");
//
//	FILE* pf= fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	/*fputc('b', pf);
//	fputc('y', pf);
//	fputc('t', pf);
//	fputc('e', pf);*/
//
//	//读文件
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//} 

int main()
{
	//标准输入流	stdin
	//标准输出流	stdout
	int ch = getc(stdin);
	fputc(ch, stdout);
	return 0;
}