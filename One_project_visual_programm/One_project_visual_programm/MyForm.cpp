#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
//using namespace System::Windows::Input;
//using namespace System::Windows::Markup;

int main(array<String^>^ args_main)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Oneprojectvisualprogramm::MyForm form;
	Application::Run(% form);
	return 0;
}