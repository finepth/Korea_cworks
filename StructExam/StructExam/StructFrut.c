#include <stdio.h>

typedef struct
{
	char name[20];
	int quantity;
	char* type;
}Fruit;


int main_fruit()
{
	char* types[] = { "Apple", "Banana", "Orange" };
	
	Fruit f = { "대구 사과",100, types[0] };

	printf("과일 이름: %s\n", f.name);
	printf("과일 수량: %d\n", f.quantity);
	f.type = "kiwi";
	printf("과일 종류: %s\n", f.type);








	return 0;
}