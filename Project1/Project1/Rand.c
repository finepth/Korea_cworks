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
	printf("동전: %d\n", coin);

	if (coin == 0)
	{
		printf("앞면\n");
	}
	else
	{
		printf("뒷면\n");
	}



	dice = rand() % 6 + 1;
	printf("주사위의 눈: %d\n", dice);


	for (int i = 1; i <= 10; i++)
	{
		dice = rand() % 6 + 1;
		printf("주사위이 눈: %d\n", dice);
	}


	char season[][5] = { "봄", "여름", "가을", "겨울" };
	int rndIdx = 0;

	int size = sizeof(season) / sizeof(season[0]);
	printf("%d %d\n", sizeof(season), sizeof(season[0]));
	printf("%d\n", size);


	rndIdx = rand() % size;
	printf("계절: %s\n", season[rndIdx]);

	char *season2[] = { "봄", "여름", "가을", "겨울" };
	printf("계절: %s\n", season2[rndIdx]);


	return 0;
}