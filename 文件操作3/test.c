#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	//�Ӽ��̷�ȥһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	//fputs(buf, stdout);//�ӱ�׼�������ȡ
//
//	gets(buf);
//	puts(buf);
//	return 0;
//}

struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100,3.14f,"abcdef"};
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	/*FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}*/
	//��ʽ������ʽд�ļ�
	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);

	//��ʽ������������
	/*fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
	fprintf(stdout,"%d %.2f %s\n", s.n, s.score, s.arr);*/

	//�Ѹ�ʽ������ת�����ַ����д洢��buf
	sprintf(buf, "%d %.2f %s\n", s.n, s.score, s.arr);
	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
	sscanf(buf, "%d %f %s",&(tmp.n),&(tmp.score),tmp.arr);

	printf("%d %.2f %s\n", tmp.n,tmp.score, tmp.arr);
	
	

	//fclose(pf);
	//pf = NULL;

	return 0;
}

//	scanf/printf ����Ա�׼������/��׼������� ��ʽ������/������
//	fscanf/fprintf ���������������/����������� ��ʽ������/������
//	sscnaf/sprintf 
//	sscanf�Ǵ��ַ����ж�ȡ��ʽ��������
//	sprintf�ǰѸ�ʽ����������ɣ��洢�����ַ���
