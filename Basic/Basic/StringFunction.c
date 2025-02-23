#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>





int main_string()
{
	char msg1[] = "Good Luck";
	char msg2[20];


	int len = strlen(msg1);
	printf("문자열의 개수: %d\n", len);

	printf("%s\n", strcpy(msg2, msg1));
    





	char greet1[] = "hello";
	char greet2[20];

	printf("문자열을 입력하세요: ");
	scanf_s("%s", greet2, sizeof(greet2));

	if (strcmp(greet1, greet2) == 0)
	{
		printf("문자열이 일치합니다.\n");
	}
	else
	{
		printf("문자열이 일치 하지 않습니다\n");
	}
	printf("결과: %d\n", strcmp(greet1, greet2));

	return 0;
} 