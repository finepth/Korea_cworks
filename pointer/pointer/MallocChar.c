#include <stdio.h>

int main() 
{  
	char* pc;
	pc = (char*)malloc(sizeof(char) * 26);
	if (pc == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�\n");
		exit(1);
	}

	*pc = 'A';
	*(pc + 1) = 'B';

	//printf("%c\n", *pc);
	//printf("%c\n", *(pc + 1));
	for (int i = 0; i < 26; i++)
	{
		*(pc + 1) = 'A' + i;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%2c", *(pc + 1));
	}
	
		free(pc);

	return 0;
}