//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TPingPong : public TForm
{
__published:	// IDE-managed Components
        TMemo *Information;
        TButton *ok;
        void __fastcall okClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPingPong(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPingPong *PingPong;
//---------------------------------------------------------------------------
#endif
