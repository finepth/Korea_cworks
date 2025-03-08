#include <stdio.h>

void changeArray(int *a)
{
	a[1] = 50;
}

int main_changearray()
{
	int arr[] = { 10, 20, 30 };

	//arr[1] = 50;

	changeArray(arr);

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
		
	}





	return 0;
}