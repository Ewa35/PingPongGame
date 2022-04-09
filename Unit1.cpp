//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x=-8;
int y=-8;
int numberOfBouncesBall=0;
int  rightSidePoints=0;
int leftSidePoints=0;
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
void __fastcall TForm1::ballMovementTimer(TObject *Sender)
{
           ball->Left+=x;
        ball->Top+=y;
        p2->Left=background->Width-30;
        p1->Left=background->Left+10;


        // odbicie od g�rnej   sciany
        if (ball->Top-5<=background->Top) y=-y;
        // odbij od Downnej sciany
        if (ball->Top+ball->Height+5>background->Height-5)  y=-y;
        // skucha z lewej
        if (ball->Left<=p1->Left+p1->Width-30)
        {
                ballMovement->Enabled=false;
                ball->Visible=false;
                rightSidePoints++;
                whoWin->Caption="Punkt dla gracza: PRAWEGO";
                displayResult();
        }

        else if(ball->Top > p1->Top-ball->Height/2 && ball->Top < p1->Top+p1->Height &&
                 ball->Left-ball->Width <p1->Left)
       {
               if (x<0) x=-x;
               numberOfBouncesBall++;
               ballMovement->Interval-=1;


       }
       // skucha z prawej
       if (ball->Left>p2->Left+p2->Width+30)
       {
                ballMovement->Enabled=false;
                ball->Visible=false;
                leftSidePoints++;
                whoWin->Caption="Punkt dla gracza: LEWEGO";
                displayResult();
        }
        else if(ball->Top > p2->Top-ball->Height/2 && ball->Top < p2->Top+p2->Height &&
                 ball->Left+ball->Width >p2->Left)
       {
               if (x>0) x=-x;
               numberOfBouncesBall++;
               ballMovement->Interval-=1;


       }
}
//---------------------------------------------------------------------------

