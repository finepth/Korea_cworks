#include <stdio.h>
#include <stdlib.h>

int main_rnd()
{
	int rndVal;
	int coin, dice;

	//srand(11);
	srand(time(NULL));




	rndVal = rand();
	//printf("%d\n", rndVal);

	coin = rand() % 2;
	printf("����: %d\n", coin);

	if (coin == 0)
	{
		printf("�ո�\n");
	}
	else
	{
		printf("�޸�\n");
	}



	dice = rand() % 6 + 1;
	printf("�ֻ����� ��: %d\n", dice);


	for (int i = 1; i <= 10; i++)
	{
		dice = rand() % 6 + 1;
		printf("�ֻ����� ��: %d\n", dice);
	}


	char season[][5] = { "��", "����", "����", "�ܿ�" };
	int rndIdx = 0;

	int size = sizeof(season) / sizeof(season[0]);
	printf("%d %d\n", sizeof(season), sizeof(season[0]));
	printf("%d\n", size);


	rndIdx = rand() % size;
	printf("����: %s\n", season[rndIdx]);

	char *season2[] = { "��", "����", "����", "�ܿ�" };
	printf("����: %s\n", season2[rndIdx]);


	return 0;
}