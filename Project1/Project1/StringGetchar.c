#include <stdio.h>


//int main()
{
	char c1, c2;

	//printf("�Է��ϼ���\n");
	//c1 = getchar();
	//while (getchar() != '\n');
	//c2 = getchar();

	//printf("%c %c", c1, c2);

	char name[20];
	int age;


	printf("�̸� �Է�: ");
	scanf_s("%s", name, sizeof(name));

	while (getchar() != '\n');

	printf("���� �Է�: ");
	scanf_s("%d", &age);

	printf("�̸�: %s ����: %d", name, age);




	return 0;
}