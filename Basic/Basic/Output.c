#include <stdio.h>

int main_Output() {
	int number = 11;
	char place = 'B';
	char name[] = "������";
	float weight = 80.5f;
	double heigt = 168.5;




	printf("%d, %dByte\n", number,sizeof(number));
	printf("%c ������, %dByte\n", place, sizeof(place));
	printf("���̸��� %s�Դϴ�., %dByte\n", name, sizeof(name));
	printf("�����Դ� %.2f kg�Դϴ�., %dByte\n",weight, sizeof(weight));
	printf("Ű�� %.2lf cm�Դϴ�., %dByte\n",heigt, sizeof(heigt));
	
	return 0;
}