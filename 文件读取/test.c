#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//1.��λָ��λ��
	fseek(pf,3,SEEK_CUR);
	//��ȡ�ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;

	return 0;
}