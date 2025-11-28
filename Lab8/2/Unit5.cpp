//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::RadioButton2Click(TObject *Sender)
{
Label3->Caption = "р";
Edit3 -> SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::RadioButton1Click(TObject *Sender)
{
Label3->Caption = "п";
Edit3 -> SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button2Click(TObject *Sender)
{
exit(1);
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button1Click(TObject *Sender)
{
float f1 = StrToFloat(Edit1 ->Text);

float f2 = StrToFloat(Edit2 ->Text);

float f3 = StrToFloat(Edit3 ->Text);

float f4;

   if(Button4->Cancel==false)
   {
   float f1 = StrToFloat(Edit1 ->Text);
   float f2 = StrToFloat(Edit2 ->Text);
   float f3 = StrToFloat(Edit3 ->Text);
   float f4;
   if (RadioButton1 -> Checked) f4 = f1* f3;
   else f4 = f2*f3;
   Edit4 -> Text = FloatToStr(f4);
   }
   else
   {
   float m;

	if(Button4->Cancel==true)
		if(RadioGroup1->ItemIndex==0)
		{
		m=1.60934;
		}
		else if(RadioGroup1->ItemIndex==1)
		{
		m=1.852;
		}

		if(RadioButton1->Checked)
		{
		f4=f3/m;
		Edit4 -> Text = FloatToStr(f4);
		}
		else
		{
		f4=f3*m;
		Edit4 -> Text = FloatToStr(f4);
		}
   }


	

}



//---------------------------------------------------------------------------


void __fastcall TForm5::Button3Click(TObject *Sender)
{
if(Button4->Cancel==false)
{
Edit1->Text=" ";
Edit2->Text=" ";
Edit3->Text=" ";
Edit4->Text=" ";
}
	else
	{
	Edit3->Text=" ";
	Edit4->Text=" ";
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Label3Click(TObject *Sender)
{
if (RadioButton1->Checked==true)
{
	Label3->Caption="=>";
	RadioButton1->Checked=false;
}
else
	Label3->Caption="<=";
	RadioButton2->Checked=false;

}

//---------------------------------------------------------------------------

void __fastcall TForm5::Button4Click(TObject *Sender)
{
if(Button4->Cancel==false)
{
RadioButton1->Caption="Кілометри у мілі";
RadioButton2->Caption="Мілі у кілометри";

Edit1->Text=0;
Edit2->Text=0;
Edit1->Visible=false;
Edit2->Visible=false;

RadioGroup1->Visible=true;

Button4->Cancel=true;
Button4->Caption="Режим 1";

Label1->Caption="Кілометри та мілі";
Label1->Left=300;
}
	else if(Button4->Cancel==true)
{
RadioButton1->Caption="Купівля";
RadioButton2->Caption="Продаж";

 Edit1->Visible=true;
Edit2->Visible=true;

Button4->Cancel=false;
Button4->Caption="Режим 2";

Label1->Caption="Курс";
Label1->Left=360;
}

}
//---------------------------------------------------------------------------


