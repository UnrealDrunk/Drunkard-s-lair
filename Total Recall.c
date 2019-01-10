// This unusual program helps to remember the amount of drunk

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	char Name[80];


	system("chcp 1251 > nul");
	printf(" Здравствуй, уважаемый! Я алкогольный  чат бот!!!\n\n");
	printf(" Как я могу к тебе обращаться, братишка?\n\n");
	printf(" Представься, пожалуйста. Напиши имя и нажми Enter\n\n");
	scanf("  %s", Name);
	printf("\n");
	printf("Очень приятно познакомиться, %s!!!\n\n", Name);

	printf("Готов поспорить, что ты даже и не помнишь, что ты пил на выходных!!!\n\n");
	printf("Но, %s, я то всё про тебя знаю, от меня ничего не утаить!!!\n", Name);
	printf("И я готов тебе помочь вспомнить!!! Но тебе придется постараться и угадать!! У тебя ровно 5 попыток\n\n");
	printf("Вопрос: %s, Сколько килограммов пива ты скушал???\n\n", Name);
	printf("Напиши цифру и нажми Enter :)\n");


	int Hypothesis; // предположение юзера относительно выпитого
	int RealyDrunk; // Выпито на самом деле
	int Attempt; //Попытка угадать
	srand(time(NULL)); // Подключаем подобие реального рандома
	RealyDrunk = 2 + rand() % (7 - 2+1); // Задаем диапазон рандома от 2 до 8 НЕ включительно
	Attempt = 1;

	while (Attempt<=5)
	{
		scanf("%d", &Hypothesis);
		if (Hypothesis > 7 || Hypothesis < 2)
			printf("Подсказонька: объем полученного гастрономического удовольствия находится где-то между 2 и 7 кг пива!!!\n");
		else
			if (Hypothesis > RealyDrunk)
				printf("ТЫ конечно знатный пьяница, %s, но не стоит переоценивать свои возможности, на самом деле ты выпил меньше!\n", Name);
			else
				if (Hypothesis < RealyDrunk)
					printf("Ну, не надо быть таким скромным, расскажи как было всё на самом деле (ты выпил больше)\n");
				else
				{
					printf("Молодец, %s! Ты угадал! Уважаю!!!\n\n\n", Name);
					break;
				}

		Attempt +=1;
	}

	if (Attempt == 6)
	{
		printf("\n");
		printf("ТЫ ПРОСТО ОТВРАТИТЕЛЕНОЕ СУЩЕСТВО, %s!!! НЕ УГАДАЛ!!!\n\n!!!", Name);
		system("pause");
		exit(EXIT_SUCCESS);
	}
		
	printf("Однако, %s, Игре еще не пришел конец!!!\n\n\n", Name);
	printf("После пива ты зашел в новый бар и решил врезать по вискарю\n");
	printf("Давай сделаем предположение относительно количества шотов, %s!!?\n", Name);
	printf("У тебя снова 5 попыток, %s, но на этот раз будет сложнее\n", Name);
	printf("Напиши цифру и нажми Enter :)\n");

	int Suggestion;
	int GotDrunk;
	int GoodTry;
	GotDrunk = 4 + rand() % (15 - 4 + 1); // Задаем диапазон рандома от 4 до 16 НЕ включительно
	GoodTry = 1;

	while (GoodTry <= 5)
	{

		scanf("%d", &Suggestion);
		if (Suggestion > 15 || Suggestion < 3)
			printf("Подсказаонька: Было усугублено от 4 до 15 шотов!!!\n");
		else
			if (Suggestion > GotDrunk)
				printf("В баре не было некрасивых женщин, %s, ты столько не пил!\n", Name);
			else
				if (Suggestion < GotDrunk)
					printf("Да ты все время пил залпом, тебе не успевали наливать, %s, что за скромные цифры ты пишешь?!?\n", Name);
				else
				{
					printf("Молодец, %s! Моё тебе почтение! Моё уважение!!!\n\n", Name);
					break;
				}

		GoodTry += 1;
	}

	if (GoodTry == 6) {
		printf("\n");
		printf("Ты был просто неподражаем в тот вечер, ты проиграл, %s!!! ЭТО ФИАСКО !!!\n\n!!!", Name);
		system("pause");
		exit(EXIT_SUCCESS);
	}

	printf("Но какая может быть выпивка без хорошей закуски, %s???\n\n\n", Name);
	printf("Твое внимание привлекли гаражи через доргу, где аккуратно красовалась палатка с шаурмой\n\n");
	printf("Сколько шавух ты закинул в топку, %s???\n", Name);
	printf("И у тебя снова 5 попыток, брат\n");
	printf("Напиши цифру и нажми Enter :)\n");

	int Preposition;
	int Try_to_remember;
	Try_to_remember = 1;
	Preposition = 0;

	while (Try_to_remember <= 3)
	{
		scanf("%d", &Preposition);
		if (Preposition != 0)
			printf("Как ни старайся, %s, тебе ни за что не вспомнить, а это неправильный ответ\n", Name);
		else
		{
			printf("\n");
			printf("Молодец, %s, ты всегда знал, что закуска убивает градус, а это не допустимо!!!\n", Name);
			printf("%s, ты победил! ты вспомнил всё!!!", Name);
			break;
		}
		Try_to_remember += 1;
	}
	if (Try_to_remember == 4) 
	{
		printf("\n");
		printf("ТЫ ПРОСТО УЖАСЕН!!! %s! КАК МОЖНО БЫЛО ТАКОЕ ЗАБЫТЬ?!? \n\n!!!", Name);
		system("pause");
		exit(EXIT_SUCCESS);
	}


	getchar(); getchar();
}
