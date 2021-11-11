#include "stdafx.h"

// фаил Convert.cpp
void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer(); // преобразование Sistem::string в std::string
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

bool GetFloat(float& x, TextBox^ Tx, String^ message) {
	if (Tx->Text->Length == 0)
	{
		MessageBox::Show(message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	regex regular(R"((\d),(\d+$))"); // регулярное выражение
	String^ text = Tx->Text;
	string NewText;
	MarshalString(text, NewText);
	
	try
	{
		if (!regex_match(NewText, regular))
		{
			throw "Недопустимыe символы"; // если данные не валидны выбрасываем исключение
		}
		x = Convert::ToSingle(Tx->Text);
		return true;
	}
	catch (const char* msg) // обробатываем исключение
	{
		MessageBox::Show("Поле содержит недопустимый символ. Пример корректного ввода: 0,1", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}

void OutPut(float x, TextBox^ Tx)
{
	Tx->Text = x.ToString();
}