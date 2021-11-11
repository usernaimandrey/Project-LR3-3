using namespace System;
using namespace System::Windows::Forms;

#include <cmath>
#include <regex>
#include <string>

using std::regex;
using std::regex_match;
using std::string;

float function(float);
void CreateTable(float, float, float, float&, ListBox^);
bool GetFloat(float&, TextBox^, String^);
void OutPut(float, TextBox^);
void MarshalString(String^, string&);
