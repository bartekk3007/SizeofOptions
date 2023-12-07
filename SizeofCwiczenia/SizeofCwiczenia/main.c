#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 4;
	int b = 5;

	printf("Rozmiar to %llu\n", sizeof(a));
	printf("Rozmiar to %llu\n", sizeof(int));
	printf("Rozmiar to %llu\n", sizeof a + b);
	//printf("Rozmiar to %d\n", sizeof int);

	return 0;
}