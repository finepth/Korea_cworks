#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main_file()
{
	FILE* fp;

	fp = fopen("out.txt", "w");
	if (fp == NULL)
	{
		printf("���� ���⿡ ������\n");
		return 1;
	}

	fputc('H', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);



	fputs("\nApple\n", fp);
	fputs("���\n", fp);
	
	
	
	fclose(fp);



	return 0;
}