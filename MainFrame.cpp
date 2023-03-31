#include "MainFrame.h"

using namespace System;
using namespace System::Windows::Forms;

//https://www.youtube.com/watch?v=LF1cI7zeFm4


void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MainFrame form;
	Application::Run(% form);

}