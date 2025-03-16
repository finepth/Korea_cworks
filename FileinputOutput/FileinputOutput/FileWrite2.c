#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main_write2()
{
	FILE* fp;
	fp = fopen("ascii.txt", "w");
	if (fp == NULL)
	{
		printf("파일 열기에 실패함\n");
		return -1;
	}

	for (int i = 32; i < 128;i++) 
	{
		if (i % 10 == 0)
			fputc('\n', fp);
		fputc(i, fp);
		fputc('\t', fp);
	}






	fclose(fp);
	
	return 0;
}