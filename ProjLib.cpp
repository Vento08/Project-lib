#include "pch.h"
#include "ProjLib.h"

namespace ProjLib {
	double Class1::vvod(TextBox^ t)
	{
		return Convert::ToDouble(t->Text);
	}

	void Class1::vivod(double x, TextBox^ t)
	{
		t->Text = x.ToString("F2");
	}

	int Class1::GetGender(ComboBox^ t) {
		String^ gender = (String^)t->SelectedItem;
		if (gender->ToLower() == "мужской")
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}

	double Class1::GetMultiplier(ComboBox^ t)
	{
		String^ activ = ((String^)t->SelectedItem)->ToLower();
		if (activ == "минимальная")
		{
			return 1.2;
		}
		else if (activ == "слабая")
		{
			return 1.375;
		}
		else if (activ == "средняя")
		{
			return 1.55;
		}
		else if (activ == "высокая")
		{
			return 1.725;
		}
		else if (activ == "экстра")
		{
			return 1.9;
		}
	}

	double Class1::GetTipTel(ComboBox^ t) {
		String^ activ = ((String^)t->SelectedItem)->ToLower();
		if (activ == "астенический")
		{
			return 0;
		}
		else if (activ == "гиперстенический")
		{
			return 1;
		}
		else if (activ == "нормостенический")
		{
			return 2;
		}
	}
}