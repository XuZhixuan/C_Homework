#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _contact
{
	char name[10];
	char phone[12];
} DataType;

typedef struct _contactList
{
	DataType* list;
	int length;
	int MaxLength;
} ListType;

ListType* CreateList(int length);
void DestroyList(ListType* pList);
void clearList(ListType* pList);
int IsEmptyList(ListType* pList);
int GetListLength(ListType* pList);
int GetListElement(ListType* pList, int n, DataType* data);
int FindElement(ListType* pList, int position, DataType data);
int GetPriorElement(ListType* pList, int n, DataType* data);
int GetNextElement(ListType* pList, int n, DataType* data);
int InsertToList(ListType* pList, int position, DataType data);
int DeleteFromList(ListType* pList, int position);
int DeleteFromListByName(ListType* pList, char* name);
void printList(ListType* pList);
void printLine(char* to_print, int size_to_print);

int main()
{
	ListType* contacts = CreateList(7);

	printList(contacts);
	printf("现在插入数据\n");

	DataType to_insert = {"David","13466983721"};
	InsertToList(contacts, 0, to_insert);

	memset(to_insert.name, '\0', 10);
	strcpy_s(to_insert.name, 10, "Alice");
	strcpy_s(to_insert.phone, 12, "18391133875");
	InsertToList(contacts, 1, to_insert);

	memset(to_insert.name, '\0', 10);
	strcpy_s(to_insert.name, 10, "Mary");
	strcpy_s(to_insert.phone, 12, "18391133875");
	InsertToList(contacts, 2, to_insert);

	memset(to_insert.name, '\0', 10);
	strcpy_s(to_insert.name, 10, "Maria");
	strcpy_s(to_insert.phone, 12, "15968753951");
	InsertToList(contacts, 3, to_insert);

	memset(to_insert.name, '\0', 10);
	strcpy_s(to_insert.name, 10, "My");
	strcpy_s(to_insert.phone, 12, "11206997586");
	InsertToList(contacts, 4, to_insert);

	memset(to_insert.name, '\0', 10);
	strcpy_s(to_insert.name, 10, "Jhon");
	strcpy_s(to_insert.phone, 12, "11516874548");
	InsertToList(contacts, 5, to_insert);

	memset(to_insert.name, '\0', 10);
	strcpy_s(to_insert.name, 10, "Jhoson");
	strcpy_s(to_insert.phone, 12, "12345678900");
	InsertToList(contacts, 6, to_insert);

	printList(contacts);

	printf("现在删除第二个\n");
	DeleteFromList(contacts, 1);
	printList(contacts);

	printf("现在删除名叫My的\n");
	DeleteFromListByName(contacts, "My");
	printList(contacts);

	DestroyList(contacts);

	return 0;
}

ListType* CreateList(int length)
{
	ListType* sqList = (ListType*)malloc(sizeof(ListType));

	if (sqList != NULL)
	{
		sqList->list = (DataType*)malloc(sizeof(DataType)*length);

		if (sqList->list == NULL)
		{
			return NULL;
		}

		sqList->length = 0;
		sqList->MaxLength = length;
	}

	return sqList;
}

void DestroyList(ListType* pList)
{
	free(pList->list);
}

void clearList(ListType* pList)
{
	pList->length = 0;
}

int IsEmptyList(ListType* pList)
{
	return pList->length == 0 ? 1 : 0;
}

int GetListLength(ListType* pList)
{
	return pList->length;
}

int GetListElement(ListType* pList, int n, DataType* data)
{
	if (n < 0 || n > pList->length - 1)
	{
		return 0;
	}

	*data = pList->list[n];
	return 1;
}

int FindElement(ListType * pList, int position, DataType data)
{
	for (int i = position; i < pList->length; ++i)
	{
		if (data.name == pList->list[i].name && data.phone == pList->list[i].phone)
		{
			return i;
		}
	}
	return -1;
}

int GetPriorElement(ListType * pList, int n, DataType * data)
{
	if (n < 1 || n > pList->length - 1)
	{
		return -1;
	}
	*data = pList->list[n - 1];
	return n - 1;
}

int GetNextElement(ListType * pList, int n, DataType * data)
{
	if (n < 0 || n > pList->length - 2)
	{
		return -1;
	}
	*data = pList->list[n + 1];
	return n + 1;
}

int InsertToList(ListType * pList, int position, DataType data)
{
	if (position < 0 || position > pList->length || pList->length == pList->MaxLength)
	{
		return -1;
	}

	for (int i = pList->length; i < position; --i)
	{
		pList->list[i] = pList->list[i - 1];
	}

	pList->list[position] = data;

	return ++pList->length;
}

int DeleteFromList(ListType* pList, int position)
{
	if (position < 0 || position > pList->length)
	{
		return -1;
	}

	for (int i = position; i < pList->length - 1; ++i)
	{
		pList->list[i] = pList->list[i + 1];
	}

	return --pList->length;
}

int DeleteFromListByName(ListType* pList, char* name)
{
	int position = -1;

	for (int i = 1; i <= pList->length; i++)
	{
		if (strcmp(pList->list[i].name, name) == 0)
		{
			position = i;
		}
	}

	if (position == -1)
	{
		return -1;
	}

	return DeleteFromList(pList, position);
}

void printList(ListType* pList)
{
	char to_print[25];

	memset(to_print, '-', 25);
	to_print[0] = '+'; to_print[11] = '+'; to_print[24] = '+';
	printLine(to_print, 25);

	memset(to_print, ' ', 25);
	to_print[0] = '|'; to_print[11] = '|'; to_print[24] = '|';
	memcpy_s(&to_print[1], 10, "Name", 4);
	memcpy_s(&to_print[12], 11, "Phone", 5);
	printLine(to_print, 25);

	memset(to_print, '-', 25);
	to_print[0] = '+'; to_print[11] = '+'; to_print[24] = '+';
	printLine(to_print, 25);

	for (int i = 0; i < pList->length; i++)
	{
		memset(to_print, ' ', 25);
		to_print[0] = '|'; to_print[11] = '|'; to_print[24] = '|';
		memcpy_s(&to_print[1], 10, pList->list[i].name, strlen(pList->list[i].name));
		memcpy_s(&to_print[12], 11, pList->list[i].phone, strlen(pList->list[i].phone));
		printLine(to_print, 25);

		memset(to_print, '-', 25);
		to_print[0] = '+'; to_print[11] = '+'; to_print[24] = '+';
		printLine(to_print, 25);
	}

	return;
}

void printLine(char* to_print, int size_to_print)
{
	for (int i = 0; i < size_to_print; i++)
	{
		printf(i == size_to_print - 1 ? "%c\n" : "%c", to_print[i]);
	}

	return;
}