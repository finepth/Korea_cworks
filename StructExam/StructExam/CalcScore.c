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

	printf("===========���� ���� ���α׷�===========\n");

	for (int i = 0; i < 3; i++)
	{
		printf("�й� �Է�: ");
		scanf_s("%d", &s[i].number);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("�й� %d\n", s[i].number);
	}


	return 0;
}