//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label1;
	TEdit *Edit3;
	TEdit *Edit4;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label3;
	TButton *Button3;
	TButton *Button4;
	TRadioGroup *RadioGroup1;
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
