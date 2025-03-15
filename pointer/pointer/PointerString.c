#include <stdio.h>


int main_pointerstring()
{
	//char word[] = "apple"
		//printf("%s\n", word);


	char word[][10] = {"apple" ,"banana","grape"};
	int size;

	printf("%s\n", word[0]);
	printf("%s\n", word[1]);
	printf("\n========================\n");


		size = sizeof(word) / sizeof(word[0]);
		printf("%d %d\n", sizeof(word), sizeof(word[0]));
		for (int i = 0; i < size; i++)
		{
			printf("%s\n", word[1]);
		}

		printf("\n========================\n");

		char *fruit[] = { "apple" ,"banana","grape" };

		printf("%s\n", fruit[0]);
		printf("%s\n", fruit[1]);

		for (int i = 0; i < size; i++)
		{
			printf("%s\n", fruit[i]);
		}



	return 0;
}