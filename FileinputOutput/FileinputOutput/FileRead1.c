#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main_read()
{
 	
	FILE* fp;
	int ch;


	fp = fopen("out.txt", "r");
	if (fp == NULL)
	{
		printf("���� ���⿡ ������\n");
			return -1;
	}

	//ch = fgetc(fp);
	//printf("%c", ch);

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF) {
			break;
		}

		printf("%c", ch);
	}






	fclose(fp);

	return 0;
}