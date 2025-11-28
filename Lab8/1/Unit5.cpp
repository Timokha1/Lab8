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
void __fastcall TForm5::Button1Click(TObject *Sender)
{
Image1->Visible = true;
Image2->Visible = false;
Image3->Visible = false;

Label2->Caption="Портретна фотографія";

Button2->Visible=true;
Button1->Visible=false;
Button4->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
Image1->Visible = false;
Image2->Visible = true;
Image3->Visible = false;

Label2->Caption="Художня фотографія";

Button2->Visible=false;
Button3->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
Image1->Visible = false;
Image2->Visible = false;
Image3->Visible = true;

Label2->Caption="Будинок";

Button3->Visible=false;
Button1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button4Click(TObject *Sender)
{
Image1->Visible=false;
Image2->Visible=false;
Image3->Visible=false;

Label2->Caption="";

Button1->Visible=true;
Button2->Visible=false;
Button3->Visible=false;
Button4->Enabled=false;
}
//---------------------------------------------------------------------------
