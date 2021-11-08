#include "stdafx.h"
#include "MyForm.h"

using namespace ProjectLR33;

[STAThread]
int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ProjectLR33::MyForm form;
    Application::Run(% form);
    return 0;
}