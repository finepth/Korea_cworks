#include <stdint.h>
void callByValue(int);
int main()
{
	int num = 10;

	callByValue(num);

	printf("main �Լ� �� �� ������:%d\n", num);
	
	return 0;
}

void callByValue(int n)
{
	n++;
	printf("�Լ� �� �� ������:%d\n",n);
}