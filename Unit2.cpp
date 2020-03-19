// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int i, j;
int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
int Razn(int a, int b) {
	return (a - b);
}

void __fastcall TForm2::Button1Click(TObject *Sender) {
	Edit1->Text = "";
	Edit2->Text = "";
	Edit3->Text = "";
	Edit4->Text = "";
	Edit5->Text = "";
	Edit6->Text = "";
	Edit7->Text = "";
	Edit8->Text = "";
	Edit9->Text = "";
	Edit10->Text = "";
	Edit11->Text = "";
	i = 37;
	for (j = 0; j < 100; j++) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit1->Text = Edit1->Text + " " + IntToStr(j);
			a1 = j;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit1->Text = Edit1->Text + "0";
		}
	}
	for (j = 99; j > 0; j--) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit2->Text = Edit2->Text + " " + IntToStr(j) + " ";
			a2 = j;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit2->Text = Edit2->Text + "0";
		}
	}
	a3 = Razn(a2, a1);
	Edit7->Text = Edit7->Text + " " + IntToStr(a3);
	i = 51;
	for (j = 0; j < 100; j++) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit3->Text = Edit3->Text + " " + IntToStr(j);
			a1 = j;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit3->Text = Edit3->Text + "0";
		}
	}
	for (j = 99; j > 0; j--) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit4->Text = Edit4->Text + " " + IntToStr(j) + " ";
			a2 = j;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit4->Text = Edit4->Text + "0";
		}
	}
	a4 = Razn(a2, a1);
	Edit7->Text = Edit7->Text + " " + IntToStr(a4);
	i = 68;
	for (j = 0; j < 100; j++) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit5->Text = Edit5->Text + " " + IntToStr(j);
			a1 = j;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit5->Text = Edit5->Text + "0";
		}
	}
	for (j = 99; j > 0; j--) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit6->Text = Edit6->Text + " " + IntToStr(j) + " ";
			a2 = j;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit6->Text = Edit6->Text + "0";
		}
	}
	a5 = Razn(a2, a1);
	Edit7->Text = Edit7->Text + " " + IntToStr(a5);
	j = 50;
	for (i = 0; i < 100; i++) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit8->Text = Edit8->Text + " " + IntToStr(i);
			a6 = i;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit8->Text = Edit8->Text + "0";
		}
	}
	for (i = 99; i > 0; i--) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit9->Text = Edit9->Text + " " + IntToStr(i);
			a7 = i;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit9->Text = Edit9->Text + "0";
		}
	}
	a8 = Razn(a7, a6);
	i = 41;
	for (j = 0; j < 100; j++) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit10->Text = Edit10->Text + " " + IntToStr(j);
			a9 = j;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit10->Text = Edit10->Text + "0";
		}
	}
	for (j = 99; j > 0; j--) {
		if (Image1->Canvas->Pixels[j][i] != clWhite) {
			Edit11->Text = Edit11->Text + " " + IntToStr(j);
			a10 = j;
			break;
		}
		if (Image1->Canvas->Pixels[j][i] == clWhite) {
			Edit11->Text = Edit11->Text + "0";
		}
	}
	a11 = Razn(a10, a9);
	if (a5 > a4 && a4 > a3 && a8 > 20) {
		Edit7->Text = Edit7->Text + " " + "à";
	}
	if (a5 > a4 && a4 > a3 && a8 < 20) {
		Edit7->Text = Edit7->Text + " " + "ë";
	}
	if (a3 == a4 && a4 == a5 && a3 != 0 && a6 < 33) {
		Edit7->Text = Edit7->Text + " " + "ï";
	}
	if (a3 == a4 && a4 == a5 && a3 != 0 && a6 > 33) {
		Edit7->Text = Edit7->Text + " " + "í";
	}
	if (a4 > a3 && a4 > a5) {
		Edit7->Text = Edit7->Text + " " + "î";
	}
	if (a11 < 10 && a8 > 50) {
		Edit7->Text = Edit7->Text + " " + "ý";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender) {
	if (OpenDialog1->Execute()) {
		Image1->Picture->LoadFromFile(OpenDialog1->FileName);
	}
}
// ---------------------------------------------------------------------------
