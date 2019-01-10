// The program guesses the word. The user enters the word from the keyboard, the program performs the array's reverse
// The reverse word is placed in the text file. User tries to guess the word called from the file.

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	system("chcp 1251 > nul");

	printf("Введите слово привествия:    ");
	printf("\n");

	char HiWord[20];
	int size = 0;
	scanf("%s%n", HiWord, &size); // юзер вводит слово приветствия и программа сразу расчитывает размер слова
	printf("Введеное слово: %s\n\n", HiWord);
	printf("Длинна слова составляет %d символов\n\n", size);

	for (int i = 0; i < size / 2; i++)
	{
		int TMP = HiWord[i];
		HiWord[i] = HiWord[size - 1 - i];
		HiWord[size - 1 - i] = TMP;
	}

	//printf("Реверсированное слово: %s\n\n", HiWord);

	FILE* SecretFile;
	SecretFile = fopen("TopSecret.txt", "w");
	fprintf(SecretFile, "%s", HiWord);
	fclose(SecretFile);

	char Passcode[20];
	SecretFile = fopen("TopSecret.txt", "r");
	fscanf(SecretFile, "%s", Passcode);
	//printf("Password: %s\n", Passcode);
	fclose(SecretFile);

	system("Pause");

	int Attempt = 0;
	char Password[20];
	printf("Введите пароль и нажмите Enter:\n");
	while (Attempt < 3)
	{
		scanf("%s", Password);
		if (strcmp(Password, Passcode) != 0)
			printf("Это неправильный ответ\n");
		else
		{
			printf("Слово Отгадано, это слово %s!!!\n", Passcode);
			break;
		}

		Attempt += 1;
		printf("У тебя осталось %d попыток\n", 3 - Attempt);

	}

	if (Attempt == 3)
		printf("Не угадал\n\n");
	system("Pause");
	exit(EXIT_SUCCESS);

	system("Pause");


}



