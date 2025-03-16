//#include <stdio.h>
//
//
//int main()
//{
//	FILE* fp;
//	int ch;
//	char buffer[256];
//
//
//    fopen_s(&fp, "ascii.txt", "r");
//	if (fp == NULL)
//	{
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	/*while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF)
//			break;
//		printf("%c", ch);
//	}
//
//	while ((ch = fgetc(fp)) != EOF)
//	{
//		printf("%c, ch");
//	}*/
//
//	//fgets()
//	while (fgets(buffer, sizeof(buffer), fp) != NULL)
//	{
//		printf("%s", buffer);
//	}
//
//
//
//	fclose(fp);
//	
//	system("pause");
//
//	return 0;
//}