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
//	//读文件
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
//	//写文件
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
//	//从键盘拂去一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入流读取
//	//fputs(buf, stdout);//从标准输出流读取
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
	//格式化的形式写文件
	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);

	//格式化的输入数据
	/*fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
	fprintf(stdout,"%d %.2f %s\n", s.n, s.score, s.arr);*/

	//把格式化数据转换成字符串中存储到buf
	sprintf(buf, "%d %.2f %s\n", s.n, s.score, s.arr);
	//从buf中读取格式化的数据到tmp中
	sscanf(buf, "%d %f %s",&(tmp.n),&(tmp.score),tmp.arr);

	printf("%d %.2f %s\n", tmp.n,tmp.score, tmp.arr);
	
	

	//fclose(pf);
	//pf = NULL;

	return 0;
}

//	scanf/printf 是针对标准输入流/标准输出流的 格式化输入/输出语句
//	fscanf/fprintf 是针对所有输入流/所有输出流的 格式化输入/输出语句
//	sscnaf/sprintf 
//	sscanf是从字符串中读取格式化的数据
//	sprintf是把格式化数据输出成（存储到）字符串
