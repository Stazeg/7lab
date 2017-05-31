//---------------------------------------------------------------------------

#ifndef HashTableH
#define HashTableH
//---------------------------------------------------------------------------
#include "List.h"

class HashTable
{
public:

	List* Values[30];

	HashTable();
	int HashFunction(String Value);
	void Add(String Value);
	void DeleteByValue(String Value);
	void ShowHashTable(TMemo *& Memo);
};

#endif
