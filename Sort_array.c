//Write a program that sorts the given array of integers from the lowest to the highest

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

#define N 7

int main()
{
	int Array_1[N] = { 55, 16, 99, 84, 35, 96, 1 };

	for (int i = 1; i < N; i++)
	{
		int k = i;
		while (k > 0 && Array_1[k - 1] > Array_1[k])
		{
			int tmp = Array_1[k - 1];
			Array_1[k - 1] = Array_1[k];
			Array_1[k] = tmp;
			k -= 1;
		}

	}
	printf("Array_1 sorted from min to max: ");
	for (int i = 0; i < N; i++)
		printf("%3d", Array_1[i]);

	printf("\n");
	system("Pause");
}
