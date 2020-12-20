#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace ProjLib {
	public ref class Class1
	{
	public:
		static double vvod(TextBox^ t);
		static void vivod(double x, TextBox^ t);
		static int GetGender(ComboBox^ t);
		static double GetMultiplier(ComboBox^ t);
		static double GetTipTel(ComboBox^ t);
	};
}
