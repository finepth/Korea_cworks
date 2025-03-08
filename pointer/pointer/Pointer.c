#include <stdio.h>

int main_pointrer1()
{
	int n = 3;

	int* pn;

	pn = &n;
	
	printf("변수의 값; %d\n", n);
	printf("변수의 메모리 번지: %x\n", &n);


	printf("포인터 (변수)의 값 %x\n", pn);
	printf("포인터 (변수)의 메모리번지: %x\n", &pn);
	printf("포인터 (변수)가 가리키는 변수의 값: %d\n", *pn);
	
	printf("변수의 자료형 크기: %dByte\n", sizeof(n));
	printf("포인터 변수의 자료형 크기: %dByte\n", sizeof(pn));


	char c;
	char* pc;


	c = 'A';
	pc = &c;

	printf("변수의 값: %c\n", c);
	printf("변수의 주소: %x\n", &c);
	printf("포인터의 값: % x\n", pc);
	printf("포인터가 가리키는 메모리 값: %c\n", *pc);
	printf("포인터 변수의 자료형 크기: %dByte\n", sizeof(pc));




	return 0;
}