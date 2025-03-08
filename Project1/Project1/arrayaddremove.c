#include <stdio.h>

int main_arrayaddremove()
{
	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;




	for (int i = 0;	i < 5; i++) {
		printf("%-3d", arr[i]);
	}
	printf("\n===========================\n");


	arr[2] = 0;

	for (int i = 2; i < 4; i++) {
		arr[i] = arr[i + 1];
	}
	for (int i = 0; i < 4; i++) {
		printf("%-3d", arr[i]);
	}

	return 0;
}