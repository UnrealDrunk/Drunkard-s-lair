// This program counts the value of Fibonacci numbers with the corresponding sequence number, starting with 1

#include <stdio.h>
#include<stdlib.h>
#include<iso646.h>

int RecursionNF(int x);

int main()
{
	int OrderNumber;
	printf("Insert Ordinal Fibonacci number and press Enter:  ");
	scanf_s("%d", &OrderNumber);
	printf("\n");
	printf("Fibonacci Sequence Elements:  ");
	for (int step = 1; step <= OrderNumber; step++)
		printf("%2d ", RecursionNF(step)); 
	printf("\n");
	system("Pause");

}
int RecursionNF(int N)
{
	if (N == 0)
		return 0;
	if (N == 1 or N == 2)
		return 1;
	return RecursionNF(N - 1) + RecursionNF(N - 2); 
}
