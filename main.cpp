//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "HashTable.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
HashTable* MyHashTable = new HashTable();
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Memo->Lines->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AddClick(TObject *Sender)
{
	MyHashTable->Add(Value->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteClick(TObject *Sender)
{
	MyHashTable->DeleteByValue(Value->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShowClick(TObject *Sender)
{
	MyHashTable->ShowHashTable(Memo);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RandomizeClick(TObject *Sender)
{
	randomize();
	for (int i = 0; i < 10; i++)
	{
		MyHashTable->Add(IntToStr(rand()));
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SolveTaskClick(TObject *Sender)
{
	int SumOfKeys = 0;
	int NumOfKeys = 0;
	for (int i = 0; i < 30; i++)
	{
		NumOfKeys += MyHashTable->Values[i]->Amount;
		SumOfKeys += i*MyHashTable->Values[i]->Amount;
	}
	double Average = (double)SumOfKeys / NumOfKeys;
	int Answer = 0;
	for (int i = 0; i < 30; i++)
	{
		if (i > Average) { Answer += MyHashTable->Values[i]->Amount; }
	}
	Memo->Clear();
	Memo->Lines->Add("Count of keys: " + IntToStr(Answer));
}
//---------------------------------------------------------------------------

