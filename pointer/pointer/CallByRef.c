#include <stdint.h>
void callByValue(int);
void CallByReference(int*);

int main_CallByRef()
{
	int num = 10;

	printf("\n*********���� ���� ȣ��*************\n");
	callByValue(num);
	printf("main �Լ� �� �� ������:%d\n", num);

	printf("\n---------------------------------------------------\n");


	printf("\n==============�ּҿ� ���� ȣ��=============\n");
	CallByReference(&num);
	printf("main �Լ� �� �� ������:%d\n", num);
	
	return 0;
}

void callByValue(int n)
{
	n++;
	printf("�Լ� �� �� ������:%d\n",n);
}

void CallByReference(int* p)
{
	*p += 1;
	printf("main �Լ� �� �� ������:%d\n", *p);
}