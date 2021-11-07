#include "MyForm.h"

#include "stdafx.h"

#include <Windows.h>

using namespace ProjectLR33;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}