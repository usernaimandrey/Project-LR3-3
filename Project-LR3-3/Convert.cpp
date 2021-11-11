#include "stdafx.h"

// ���� Convert.cpp
void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer(); // �������������� Sistem::string � std::string
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

bool GetFloat(float& x, TextBox^ Tx, String^ message) {
	if (Tx->Text->Length == 0)
	{
		MessageBox::Show(message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	regex regular(R"((\d),(\d+$))"); // ���������� ���������
	String^ text = Tx->Text;
	string NewText;
	MarshalString(text, NewText);
	
	try
	{
		if (!regex_match(NewText, regular))
		{
			throw "�����������e �������"; // ���� ������ �� ������� ����������� ����������
		}
		x = Convert::ToSingle(Tx->Text);
		return true;
	}
	catch (const char* msg) // ������������ ����������
	{
		MessageBox::Show("���� �������� ������������ ������. ������ ����������� �����: 0,1", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}

void OutPut(float x, TextBox^ Tx)
{
	Tx->Text = x.ToString();
}