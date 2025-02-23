#include <stdio.h>
#include <string.h>

void UpperCase(char);
int main()
{
	char buf[] = "I am a student";
	int length;
	int i;

	//printf("% s\n", buf);


	////printf("%c\n", buf[0]);
	//printf("%c\n", buf[1]);
	//printf("%c\n", buf[2]);
	
	length = strlen(buf);
	printf("문자열의 개수: %d\n", length);

	for (i = 0; i < length; i++)
	{
		// printf("%c\n", buf[i]);
		UpperCase(buf[i]);
	}

	void UpperCase(char data)
	{
		if (data >= 'a' && data <= 'z');
		{
			data = data - ('a' - 'A');
		}
		printf("%c", data);
	}


	return 0;
}