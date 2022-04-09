//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (Key == 0x41) p1Up->Enabled=true;
        if (Key == 0x5A) p1Down->Enabled=true;
        if (Key == VK_UP) p2Up->Enabled=true;
        if (Key == VK_DOWN) p2Down->Enabled=true;
}        

//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (Key==0x41) p1Up->Enabled=false;
        if (Key==0x5A) p1Down->Enabled=false;
        if (Key == VK_UP) p2Up->Enabled=false;
        if (Key == VK_DOWN) p2Down->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p1UpTimer(TObject *Sender)
{
        if (p1->Top>5) p1->Top-=10 ;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p1DownTimer(TObject *Sender)
{
        if (p1->Top+p1->Height<background->Height-5) p1->Top+=10;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p2UpTimer(TObject *Sender)
{
        if (p2->Top>5) p2->Top-=10 ;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::p2DownTimer(TObject *Sender)
{
        if (p2->Top+p2->Height<background->Height-5) p2->Top+=10;
}
//---------------------------------------------------------------------------
