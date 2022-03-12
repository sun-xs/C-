#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 100
//预定义符号

#include<stdio.h>

int main()
{
	/*printf("%s\n", __file__);
	printf("%d\n", __line__);
	printf("%s\n", __date__);
	printf("%s\n", __time__);*/

	//写日志文件
	int i = 0;
	int arr[10];
	FILE* pf = fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s line:%d date:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
		printf("%s\n", __FUNCTION__);
	}
	fclose(pf);
	pf = NULL;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}