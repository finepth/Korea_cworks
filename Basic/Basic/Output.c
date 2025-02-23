#include <stdio.h>

int main_Output() {
	int number = 11;
	char place = 'B';
	char name[] = "박태형";
	float weight = 80.5f;
	double heigt = 168.5;




	printf("%d, %dByte\n", number,sizeof(number));
	printf("%c 강의장, %dByte\n", place, sizeof(place));
	printf("제이름은 %s입니다., %dByte\n", name, sizeof(name));
	printf("몸무게는 %.2f kg입니다., %dByte\n",weight, sizeof(weight));
	printf("키는 %.2lf cm입니다., %dByte\n",heigt, sizeof(heigt));
	
	return 0;
}