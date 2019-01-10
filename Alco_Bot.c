#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	char Name[20];

	srand(time(NULL)); // Подключаем подобие реального рандома
	system("chcp 1251 > nul");
	printf(" Здравствуй, уважаемый! Я алкогольный  чат бот!!!\n\n");
	printf(" Как я могу к тебе обращаться, братишка?\n\n");
	printf(" Представься, пожалуйста. Напиши имя и нажми Enter\n\n");
	scanf("  %s", Name);
	printf("\n");
	printf("Очень приятно познакомиться, %s!!!\n\n", Name);

	printf("Готов поспорить, что ты даже и не помнишь, что ты пил на выходных!!!\n\n");
	printf("Но, %s, я знаю какой ты балбес, поэтому ответы мы узнаем у Автопилота!!!\n", Name);
	printf("Автопилот тоже не в себе, мы его ограничим в действиях, у него ровно 5 попыток\n\n");
	printf("Вопрос: %s, Сколько килограммов пива ты скушал???\n\n", Name);
	system("pause");

	FILE* BeerFile;
	BeerFile = fopen("BeerLog.txt", "w");
	fprintf(BeerFile, "%d", rand() % 100);
	fclose(BeerFile);

	int Hypothesis;
	BeerFile = fopen("BeerLog.txt", "r");
	fscanf(BeerFile, "%d", &Hypothesis);


	int RealyDrunk; // Выпито на самом деле
	int Attempt; //Попытка угадать

	RealyDrunk = 2 + rand() % (7 - 2 + 1); // Задаем диапазон рандома от 2 до 8 НЕ включительно
	Attempt = 0;
	while (Attempt < 5)
	{
		if (Hypothesis > 7 || Hypothesis < 2)
		{
			printf("Автопилот считает, что ты выпил %d кружек пива\n", Hypothesis);
			printf("Подсказонька: объем полученного гастрономического удовольствия находится где-то между 2 и 7 кг пива!!!\n");
			Hypothesis = 5;
		}
		else
			if (Hypothesis > RealyDrunk)
			{
				printf("Автопилот считает, что ты выпил %d кружек пива\n", Hypothesis);
				printf("ТЫ конечно знатный пьяница, %s, но не стоит переоценивать свои возможности, на самом деле ты выпил меньше!\n", Name);
				Hypothesis--;
			}
			else
				if (Hypothesis < RealyDrunk)
				{
					printf("Автопилот считает, что ты выпил %d кружек пива\n", Hypothesis);
					printf("Ну, не надо быть таким скромным, расскажи как было всё на самом деле (ты выпил больше)\n");
					Hypothesis++;
				}

				else
				{
					printf("Автопилот угадал количество выпитого - это %d кружечек пива\n", Hypothesis);
					printf("Молодец, %s! Твой Автопилот угадал! Уважаю!!!\n\n", Name);
					break;
				}

		Attempt += 1;
		int AttemptCounter;
		AttemptCounter = 5 - Attempt;
		printf("У Автопилота осталось %d попыток\n\n", AttemptCounter);


	}
	if (Attempt == 5)
	{
		printf("\n");
		printf("ТЫ ПРОСТО ОТВРАТИТЕЛЕНОЕ СУЩЕСТВО, %s!!! НЕ УГАДАЛ ДАЖЕ С ПОПОЩЬЮ АВТОПИЛОТА!!!\n\n!!!", Name);
		system("pause");
		exit(EXIT_SUCCESS);
	}

	fclose(BeerFile);
	system("pause");


	printf("Однако, %s, Игре еще не пришел конец!!!\n\n\n", Name);
	printf("После пива ты зашел в новый бар и решил врезать по вискарю\n");
	printf("Давай сделаем предположение относительно количества шотов, %s!!?\n", Name);
	printf("Это будет сложнее, поэтому у твоего Автопилота 8 попыток, %s\n", Name);
	system("pause");

	FILE* ShotFile;
	ShotFile = fopen("ShotLog.txt", "w");
	fprintf(ShotFile, "%d", rand() % 100);
	fclose(ShotFile);

	int Suggestion;
	ShotFile = fopen("ShotLog.txt", "r");
	fscanf(ShotFile, "%d", &Suggestion);
	int GotDrunk;
	int GoodTry;
	GotDrunk = 4 + rand() % (15 - 4 + 1); // Задаем диапазон рандома от 4 до 16 НЕ включительно
	GoodTry = 0;

	while (GoodTry < 9)
	{
		if (Suggestion > 15 || Suggestion < 3)
		{
			printf("Автопилот считает, что ты бахнул %d шотов\n", Suggestion);
			printf("Подсказонька: Было усугублено от 4 до 15 шотов!!!\n");
			Suggestion = 10;
		}
		else
			if (Suggestion > GotDrunk)
			{
				printf("Автопилот считает, что ты бахнул %d шотов\n", Suggestion);
				printf("В баре не было некрасивых женщин, %s, ты столько не пил!\n", Name);
				Suggestion--;
			}
			else
				if (Suggestion < GotDrunk)
				{
					printf("Автопилот считает, что ты бахнул %d шотов\n", Suggestion);
					printf("Да ты все время пил залпом, тебе не успевали наливать, %s, что за скромные цифры ты пишешь?!?\n", Name);
					Suggestion++;
				}
				else
				{
					printf("Автопилот угадал  количество злоупотребленного - это %d шотов\n\n", Suggestion);
					printf("Молодец, %s! Моё тебе почтение! Моё уважение!!!\n", Name);
					break;
				}

		GoodTry += 1;
		int AttemptCounter;
		AttemptCounter = 9 - GoodTry;
		printf("У Автопилота осталось %d попыток\n\n", AttemptCounter);

	}

	if (GoodTry == 9) {
		printf("\n");
		printf("Ты был просто неподражаем в тот вечер, ты проиграл, и Автопилот твой - днище, %s!!! ЭТО ФИАСКО !!!\n\n!!!", Name);
		system("pause");
		exit(EXIT_SUCCESS);
	}

	fclose(ShotFile);
	system("pause");


	printf("Но какая может быть выпивка без хорошей закуски, %s???\n\n\n", Name);
	printf("Твое внимание привлекли гаражи через доргу, где аккуратно красовалась палатка с шаурмой\n\n");
	printf("Сколько шавух ты закинул в топку, %s???\n", Name);
	printf("И у твоего Автопилота 3 попытки, брат\n");
	system("pause");

	FILE* KebabFile;
	KebabFile = fopen("Kebab.txt", "w");
	fprintf(KebabFile, "%d", rand() % 5);
	fclose(KebabFile);

	int KebabPreposition;
	KebabFile = fopen("Kebab.txt", "r");
	fscanf(KebabFile, "%d", &KebabPreposition);
	int Try_to_remember;
	Try_to_remember = 0;

	while (Try_to_remember < 4)
	{
		if (KebabPreposition != 0)
		{
			printf("Автопилот думает, что ты голодный свин, поэтому сожрал %d порций\n", KebabPreposition);
			printf("Как ни старайся, %s, тебе ни за что не вспомнить, а это неправильный ответ\n", Name);
			KebabPreposition--;
		}
		else
		{
			printf("\n");
			printf("Молодец, %s, ты всегда знал, что закуска убивает градус, а это не допустимо!!!\n", Name);
			printf("И автопилот тоже дошёл до этой замечательной мысли, ты ничего не съел,\nпотому что на твоем счете аккуратно красовался %d\n", KebabPreposition);
			printf("%s, ты победил! ты вспомнил всё!!!\n", Name);
			break;
		}
		Try_to_remember += 1;
		int AttemptCounter;
		AttemptCounter = 4 - Try_to_remember;
		printf("У Автопилота осталось %d попыток\n\n", AttemptCounter);

	}
	if (Try_to_remember == 4)
	{
		printf("\n");
		printf("ТЫ ПРОСТО УЖАСЕН!!! %s! КАК МОЖНО БЫЛО ТАКОЕ ЗАБЫТЬ?!? ДАЖЕ АВТОПИЛОТ В ШОКЕ!!! \n\n", Name);
		system("pause");
		exit(EXIT_SUCCESS);
	}

	fclose(KebabFile);
	system("Pause");


}
