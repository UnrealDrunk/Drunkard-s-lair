//this program reads file usin'  fopen_s/fscanf_s

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("chcp 1251 > nul");

	char* Message = "Это ещё один бессмысленный набор слов, созданный ради того, чтобы сделать домашку. Фантазия arbeiten also nicht!!!";
	char* FileName = "Mindless.txt";
	FILE *OurFile;
	errno_t err;



	err = fopen_s(&OurFile, FileName, "w");
	if (err == 0)
	{
		printf("The file 'Mindless.txt' was opened\n");
	}
	else
	{
		printf("The file 'Mindless.txt' was not opened\n");
	}


	//fputs(Message, OurFile);
	fprintf(OurFile, "%s", Message);

	fclose(OurFile);
	system("Pause");

	char BufferArray[256];

	err = fopen_s(&OurFile, FileName, "r");
	if (err == 0)
	{
		printf("The file 'Mindless.txt' was opened\n");
	}
	else
	{
		printf("The file 'Mindless.txt' was not opened\n");
	}

	printf("В рассматриваемом файле содержится следующий текст:\n\n");


	int SpaceCounter = 0;

	while (fscanf_s(OurFile, "%s", BufferArray, _countof(BufferArray)) != EOF)
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

