//---------------------------------------------------------------------------

#ifndef ListH
#define ListH
//---------------------------------------------------------------------------
#include "Node.h"

class List
{
private:

	Node* _first;
	Node* _current;
	Node* _last;

public:

	int Amount;
	List();
	bool IsEmpty();
	void DeleteByValue(String Value);
	void Push(String Value);
	void ShowList(int Key, TMemo *& Memo);

};

#endif
