#include "HalamanUtama.h"

using namespace System;
using namespace System::Windows::Forms;

void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	uasalpro::HalamanUtama uasAlpro;
	Application::Run(% uasAlpro);
}

