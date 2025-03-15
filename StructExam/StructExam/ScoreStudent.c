#include <stdio.h>

typedef struct
{
	int math;
	int eng;
	double avg;
}Score;

typedef struct
{
	int number;
	char name[20];
	Score score;
}Student;

void showStudentInfo(Student s1)
{
	printf("�й�: %d, �̸�: %s ����: %d, ����: %d, ���: %.1f\n", s1.number, s1.name, s1.score.math, s1.score.eng, s1.score.avg);
}


int main_student()
{
	Student s1;

	s1.number = 101;
	strcpy(s1.name, "������");
	s1.score.math = 95;
	s1.score.eng = 80;

	s1.score.avg = (double)(s1.score.math + s1.score.eng) / 2;



	//printf("�й�: %d, �̸�: %s ����: %d, ����: %d, ���: %.1f\n", s1.number, s1.name, s1.score.math, s1.score.eng, s1.score.avg);

	showStudentInfo(s1);

	return 0;
}