#include <stdio.h>

typedef struct
{
	int math;
	int eng;
}Score;

typedef struct
{
	int number;
	char name[20];
	Score score;
}Student;



int main()
{
	Student s[3];

	printf("===========성적 관리 프로그램===========\n");

	for (int i = 0; i < 3; i++)
	{
		printf("학번 입력: ");
		scanf_s("%d", &s[i].number);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("학번 %d\n", s[i].number);
	}


	return 0;
}