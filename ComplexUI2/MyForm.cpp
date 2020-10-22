#include "MyForm.h"
//#include <Windows.h>
//#include <stdio.h>
//#include"iostream"

// Git 
#include "Comlpex.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace ComplexUI2;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ComplexUI2::MyForm form;
	Application::Run(% form);
	Application::Run(gcnew MyForm);
}	