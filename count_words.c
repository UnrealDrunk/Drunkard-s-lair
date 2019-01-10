//the program counts the number of words
//Creates a text file
//Text read from file
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("chcp 1251 > nul");

	char* Message = "Это просто бессмысленный набор слов, созданный ради того, чтобы сделать домашку. Фантазия arbeiten nicht!!! я я я";
	char* FileName = "Mindless.txt";
	FILE *OurFile;

	OurFile = fopen(FileName, "w");
	fputs(Message, OurFile);

	fclose(OurFile);
	system("Pause");

	char BufferArray[256];
	printf("В рассматриваемом файле содержится следующий текст:\n\n");
	OurFile = fopen(FileName, "r");
	int SpaceCounter = 0;
	while (fscanf(OurFile, "%s", BufferArray) != EOF)
	{
		printf("%s ", BufferArray);
		SpaceCounter++;
	}
	printf("\n\n");
	printf("Количество слов в тексте - %d", SpaceCounter);
	fclose(OurFile);
	printf("\n\n");
	system("Pause");

}
