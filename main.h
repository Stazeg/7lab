//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo;
	TEdit *Value;
	TButton *Add;
	TLabel *StringLabel;
	TButton *Delete;
	TButton *Show;
	TButton *Randomize;
	TButton *SolveTask;
	void __fastcall AddClick(TObject *Sender);
	void __fastcall DeleteClick(TObject *Sender);
	void __fastcall ShowClick(TObject *Sender);
	void __fastcall RandomizeClick(TObject *Sender);
	void __fastcall SolveTaskClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
