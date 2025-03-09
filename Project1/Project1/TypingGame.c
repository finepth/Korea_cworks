#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	char* words[] = { "ant", "bear", "chicken", "cow", "deer", "elephant", "fox", "horese", "monkey", "tiger" };
	char* question;
	char answer[20];
	int n = 1;
	clock_t start, end;
	double elapsed;
	int size, idx;


	srand(time(NULL));

	printf("���� Ÿ�� ����, �غ�Ǹ� ����>");
	getchar();

	start = clock();
	while (n <= 10)
	{
		printf("\n���� %d", n);
		size = sizeof(words) / sizeof(words[0]);
		idx = rand() % size;
		question = words[idx];
		printf("%s\n", question);
		scanf_s("%s", answer, sizeof(answer));

		if (strcmp(question, answer) == 0)
		{
			printf("���!\n");
			n++;
		}
		else
		{
			printf("��Ÿ! �ٽõ���!\n");
		}
	}
	end - clock();
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ�ð�; %.2lf��\n", elapsed);
	
	return 0;
}