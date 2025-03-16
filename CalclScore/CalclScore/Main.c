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

void showStudentInfo(Student);

int main()
{
	Student s[3];
	int total[2] = { 0, 0 };
	double avg[2] = { 0.0,0.0 };

	printf("====성적 관리 프로그램====\n");

	for (int i = 0; i < 3; i++)
	{
		printf("학번 입력: ");
		scanf_s("%d", &s[i].number);

		printf("이름 입력: ");
		scanf_s("%s", s[i].name,sizeof(s[i].name));

		printf("수학점수 입력: ");
		scanf_s("%d", &s[i].score.math);

		printf("영어점수 입력: ");
		scanf_s("%d", &s[i].score.eng);
	}

	for (int i = 0; i < 3; i++)
	{
		total[0] = total[0] + s[i].score.math;
		total[1] = total[1] + s[i].score.eng;
	}
	avg[0] = (double)total[0] / 3;
	avg[1] = (double)total[1] / 3;
 


	for (int i = 0; i < 3; i++)
	{
		printf("학번: %d, 이름: %s, 수학: %d, 영어: %d\n", s[i].number, s[i].name, s[i].score.math, s[i].score.eng);
	}

	printf("============학생 정보 출력============\n");
	for (int i = 0; i < 3; i++)
	{
		showStudentInfo(s[i]);
	}



	printf("수학 총점: %d, 영어 총점: %d\n", total[0], total[1]);
	printf("수학 평균: %.1lf, 영어 평균: %.1lf\n", avg[0], avg[1]);


	system("pause");

	return 0;
}

void showStudentInfo(Student st)
{
	printf("학번: %d, 이름: %s, 수학: %d, 영어: %d\n", st.number, st.name, st.score.math, st.score.eng);
}