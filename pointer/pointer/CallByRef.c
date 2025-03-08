#include <stdint.h>
void callByValue(int);
int main()
{
	int num = 10;

	callByValue(num);

	printf("main 함수 내 값 변경후:%d\n", num);
	
	return 0;
}

void callByValue(int n)
{
	n++;
	printf("함수 내 값 변경후:%d\n",n);
}