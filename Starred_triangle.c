// This program constructs a starred triangle

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int lines;
	printf("Enter the number of lines: ");
	scanf("%d", &lines);
	int j;
	for (int i = 0; i < lines; i++)
	{
		for ( j = 1; j < lines - i; j++)
			printf(" ");
		for (j = lines - i * 2; j <= lines; j++)
			printf("^");
		printf("\n");

	}
	getchar(); getchar();

}
