#include <stdio.h>

int main_pointrer1()
{
	int n = 3;

	int* pn;

	pn = &n;
	
	printf("������ ��; %d\n", n);
	printf("������ �޸� ����: %x\n", &n);


	printf("������ (����)�� �� %x\n", pn);
	printf("������ (����)�� �޸𸮹���: %x\n", &pn);
	printf("������ (����)�� ����Ű�� ������ ��: %d\n", *pn);
	
	printf("������ �ڷ��� ũ��: %dByte\n", sizeof(n));
	printf("������ ������ �ڷ��� ũ��: %dByte\n", sizeof(pn));


	char c;
	char* pc;


	c = 'A';
	pc = &c;

	printf("������ ��: %c\n", c);
	printf("������ �ּ�: %x\n", &c);
	printf("�������� ��: % x\n", pc);
	printf("�����Ͱ� ����Ű�� �޸� ��: %c\n", *pc);
	printf("������ ������ �ڷ��� ũ��: %dByte\n", sizeof(pc));




	return 0;
}