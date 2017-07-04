#include<Windows.h>
#include<stdio.h>
#define SIZE 100

void main(void)
{
	char maChaine[SIZE];
	int i = 0;

	fflush(stdin);
	gets_s(maChaine);

	for (i = 0; maChaine[i]; i++)
	{
	}
	

	printf("%i", i);
}