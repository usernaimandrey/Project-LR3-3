#include "stdafx.h"

bool GetFloat(float& x, TextBox^ Tx, String^ message) {
	if (Tx->Text->Length == 0)
	{
		MessageBox::Show(message, "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	x = Convert::ToSingle(Tx->Text);
	return true;
}

void OutPut(float x, TextBox^ Tx)
{
	Tx->Text = x.ToString();
}