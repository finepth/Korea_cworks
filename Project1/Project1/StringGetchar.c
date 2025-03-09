#include <stdio.h>


//int main()
{
	char c1, c2;

	//printf("입력하세요\n");
	//c1 = getchar();
	//while (getchar() != '\n');
	//c2 = getchar();

	//printf("%c %c", c1, c2);

	char name[20];
	int age;


	printf("이름 입력: ");
	scanf_s("%s", name, sizeof(name));

	while (getchar() != '\n');

	printf("나이 입력: ");
	scanf_s("%d", &age);

	printf("이름: %s 나이: %d", name, age);




	return 0;
}