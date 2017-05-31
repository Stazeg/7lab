//---------------------------------------------------------------------------

#pragma hdrstop

#include "List.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

List::List()
{
	Amount = 0;
}

//Проверка на пустоту списка
bool List::IsEmpty()
{
	return (Amount == 0);
}

//Добавление элемента в список
void List::Push(String Value)
{
	if (IsEmpty())
	{
		Node* temp = new Node();
		_last = _first = temp;
		_last->Data = Value;
		Amount++;
		return;
	}
	else
	{
		Node* temp = new Node();
		_last->Next = temp;
		_last = _last->Next;
		_last->Data = Value;
		Amount++;
	}
}

//Удаление элемента по значению
void List::DeleteByValue(String Value)
{
	if (_first->Data == Value)
	{
		Amount--;
		Node* temp = _first;
		_first = _first->Next;
		delete temp;
		return;
	}

	_current = _first;
	while (_current->Next != NULL)
	{
		if (_current->Next->Data == Value)
		{
			Node* temp = _current->Next;
			_current->Next = _current->Next->Next;
			delete temp;
			return;
		}
		_current = _current->Next;
	}
	return;
}

void List::ShowList(int key, TMemo *& Memo)
{
	String temp = IntToStr(key) + ": ";
	_current = _first;
	for (int i = 0; i < Amount - 1; i++)
	{
		temp += _current->Data + " -> ";
		_current = _current->Next;
	}
	temp += _current->Data;
	Memo->Lines->Add(temp);
}
