#include <stdio.h>

int main_pointerarray()
{
	int a[4] = { 10, 20, 30, 40 };

	int* pa;

	pa = a;

	/*printf("a[0]�� ���� %d\n", a[0]);
	printf("a[0]�� �޸� �ּҴ�  %x\n", &a[0]);
	printf("�迭�� �̸� a�� ��  %x\n", a);

	printf("a[1]�� ���� %d\n", a[1]);
	printf("a[1]�� �޸� �ּҴ� %x\n", &a[1]);
	printf("�迭�� �̸� a+1�� �� %x\n", a+1);


	for (int i = 0; i < 4; i++)
	{
		printf("%d %x %x\n", pa[i], &pa[1], pa + 1);
	}*/

	printf("������ pa�� ����Ű�� �޸𸮰�: %d\n",*pa);
	printf("������ pa + 1 ����Ű�� �޸𸮰�: %d\n",*(pa + 1));

	for (int i = 0; i < 4; i++)
	{
		printf("%x %d\n", pa + i, *(pa + i));
	}

	printf("\n-----------------------------------------\n");

		char msg[] = "Good Luck";
		char* p = msg;


	printf("%c\n", msg[0]);
	printf("%c\n", msg[1]);

	printf("%s\n", msg);


	printf("���ڿ��� ũ��: %dByte\n", sizeof(msg));
	printf("���ڿ� �������� ũ��: %dByte\n", sizeof(p));

	printf("���ڿ� �迭�� �ּ�: %x\n", msg);
	printf("���ڿ� �������� ��: %x\n", p);

	printf("%s\n", p);
	printf("%s\n", p + 1);
	printf("%s\n", p + 2);
	printf("%s\n", p + 3);
	printf("%s\n", p + 4 );

	printf("\n----------------------------------------\n");

	printf("%c\n", *p);
	printf("%c\n", *(p + 1));
	printf("%c\n", *(p + 2));
	printf("%c\n", *(p + 3));

	int size = sizeof(msg) / sizeof(msg[0]);
	printf("%d\n", size);

	for (int i = 0; i < size; i++); 

	{
		printf("%c", *(p + 1));
	}

	return 0;
}