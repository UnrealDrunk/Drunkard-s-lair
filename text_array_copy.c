// This program copies text array with dynamic memory allocation.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define N 180
#define M 180

void ReplaceStr(char* Target, char* Source)
{
	int* Memory_Block; //Pointer for a memory block for memory allocaton
	Memory_Block = (int*)malloc(M * sizeof(char));
	printf("The size of memory given is %d\n\n", M * sizeof(char));
	if (Memory_Block == NULL)
	{
		printf("Memory has not been given!\n\n");
		system("Pause");
		exit(EXIT_FAILURE);
	}
	memcpy(Target, Source, N * sizeof(char));

	free(Memory_Block);
}

int main()
{
	char SourceArray[N] = "Long time ago in a Galaxy far away";
	printf("Source Array contents: %s\n\n", SourceArray);
	
	printf(" The size of SourceArray is %d\n\n", N * sizeof(char));

	char TargetArray[N];

	//memcpy(TargetArray, SourceArray, N * sizeof(char));

	ReplaceStr(TargetArray, SourceArray);

	printf("TargetArray contents: %s\n\n", TargetArray);

	getchar();

}
