#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>

//int main()
//{
//	//���ļ�test.txt
//	//���·��
//	//.. ��ʾ��һ��·��
//	//. ��ʾ��ǰ·��
//	/*fopen("../test.txt", "r");
//	fopen("test.txt", "r");*/
//
//	//����·��д��
//	//fopen("E:\\C������Ŀ���\\�ļ�����2\\test.txt", "r");
//
//	FILE* pf= fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	/*fputc('b', pf);
//	fputc('y', pf);
//	fputc('t', pf);
//	fputc('e', pf);*/
//
//	//���ļ�
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//} 

int main()
{
	//��׼������	stdin
	//��׼�����	stdout
	int ch = getc(stdin);
	fputc(ch, stdout);
	return 0;
}