#include <stdio.h>
#define MAX_LEN 4

int main_ArrayRemove2()
{
	int cartrs[MAX_LEN];
	int indx0fCarts = 0;
	
	cartrs[indx0fCarts++] = 80;
	cartrs[indx0fCarts++] = 70;
	cartrs[indx0fCarts++] = 95;
	cartrs[indx0fCarts++] = 90;

	for (int i = 0; i < indx0fCarts; i++)
	{
		printf("%3d", cartrs[i]);
	}

	printf("%d\n", indx0fCarts);
	printf("%d\n", cartrs[indx0fCarts]);

	return 0;
}