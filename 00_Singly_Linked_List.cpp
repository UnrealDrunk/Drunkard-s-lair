// The simple program for Linked List

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>



struct Record
{
	char name[30];
	char sex[10];
	int age;
	int phone;
	Record* next;
};


int ScanFileRecord(FILE* pFile, Record* itemScan)
{
	int result = fscanf(pFile, "%s %d %s %d\n", itemScan->name, &itemScan->age, itemScan->sex, &itemScan->phone);
	return result;
}




Record* ScanFileRecord(FILE* pFile)
{
	Record* result = new Record();
	int scanResult = ScanFileRecord(pFile, result);

	if (ScanFileRecord(pFile, result) != EOF)
		return result;
	else
	{
		delete result;
		return NULL;
	}

	//delete result;
	//return NULL;
}


void PrintRecord(const Record *itemPrint)
{
	printf("%s %d %s %d\n", itemPrint->name, itemPrint->age, itemPrint->sex, itemPrint->phone);
}




int main()
{
	Record *headItem = NULL;
	Record *currentItem = NULL;
	Record *newItem;

	FILE* pFile = fopen("C://00_11Jan.txt", "r");
	if (pFile != NULL)
	{
		while (newItem = ScanFileRecord(pFile))
		{
			if (NULL == currentItem)
			{
				headItem = newItem;
				currentItem = headItem;
			}
			else
			{
				currentItem->next = newItem;
				currentItem = currentItem->next;
			
			}
		}
		fclose(pFile);

		
	}

	/*for (currentItem = headItem; currentItem != NULL; currentItem = currentItem->next)
	{
		PrintRecord(currentItem);
	}*/

	while (currentItem != NULL)
	{
		PrintRecord(currentItem);
		currentItem = currentItem->next;
	}
	

	getchar(); getchar(); // ждем ввода, чтобы консоль не закрывалась
	return 0;
}
