#include<Windows.h>
#include<stdio.h>
#define SIZE 100

void main(void)
{
	char String[SIZE];
	int i = 0;

	fflush(stdin);
	gets_s(String);

	for (i = 0; String[i]; i++)
	{
	}
	

	printf("%i", i);
}