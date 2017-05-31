//---------------------------------------------------------------------------

#pragma hdrstop

#include "HashTable.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

HashTable::HashTable()
{
	for (int i = 0; i < 30; i++)
	{
		Values[i] = new List();
	}
}

int HashTable::HashFunction(String Value)
{
	int Key = 0;
	for (int i = 1; i <= Value.Length(); i++)
	{
		Key = (Key + Value[i]) % 30;
	}
	return Key;
}

void HashTable::Add(String Value)
{
	Values[HashFunction(Value)]->Push(Value);
}

void HashTable::DeleteByValue(String Value)
{
	if (Values[HashFunction(Value)]->Amount != 0)Values[HashFunction(Value)]->DeleteByValue(Value);
}

void HashTable::ShowHashTable(TMemo *& Memo)
{
	Memo->Clear();
	for (int i = 0; i < 30; i++)
	{
		if (Values[i]->Amount != 0)
		{
			Values[i]->ShowList(i, Memo);
		}
	}
}
