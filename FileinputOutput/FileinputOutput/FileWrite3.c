//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//	FILE* fp;
//
//	fopen_s(&fp, "words.txt", "w");
//	if (fp == NULL)
//	{
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant", "monkey", "lion", "tiger", "snake" };
//
//	for (int i = 0;i < 10;i++)
//	{
//		fprintf(fp, "%s\n", words[i]);
//	}
//	
//
//
//
//
//	fclose(fp);
//	return 0;
//}