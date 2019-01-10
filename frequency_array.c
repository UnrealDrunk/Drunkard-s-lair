// frequency array

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ARRAY_LENGTH 10
#define NUMBERS_AMMOUNT 1000000

int main()
{
	srand((unsigned int)time(NULL));
	int Frequency[ARRAY_LENGTH] = { 0 };
	int a, i;
	for(i = 0; i < NUMBERS_AMMOUNT; i++)
	{
		a = rand() % ARRAY_LENGTH;
		Frequency[a]++;
	}

	for (i = 0; i < ARRAY_LENGTH; i++)
	{
		printf("Number %d has generated %6d (%5.2f%%) times \n ", i, Frequency[i],
			((float)Frequency[i] / NUMBERS_AMMOUNT * 100));
	}
	getchar();
}
