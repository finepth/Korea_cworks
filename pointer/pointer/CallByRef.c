#include <stdint.h>
void callByValue(int);
void CallByReference(int*);

int main_CallByRef()
{
	int num = 10;

	printf("\n*********값에 의한 호출*************\n");
	callByValue(num);
	printf("main 함수 내 값 변경후:%d\n", num);

	printf("\n---------------------------------------------------\n");


	printf("\n==============주소에 의한 호출=============\n");
	CallByReference(&num);
	printf("main 함수 내 값 변경후:%d\n", num);
	
	return 0;
}

void callByValue(int n)
{
	n++;
	printf("함수 내 값 변경후:%d\n",n);
}

void CallByReference(int* p)
{
	*p += 1;
	printf("main 함수 내 값 변경후:%d\n", *p);
}