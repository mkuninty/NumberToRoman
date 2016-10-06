#include"NumberToRoman.h"
string NumberToRoman::ToRoman(int num)
{
	string roman = "";
	while (num>0)
	{
		if (num > 5)
		{
			roman = roman + "V";
			num = num - 5;
		}
		else if (num == 4)
		{
			roman = roman + "IV";
			num = num - 4;
		}
		else
		{
			roman = roman + "I";
			num--;
		}
	}
	return roman;
}

#ifdef TEST
int main()
{
	int num = 3;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 4;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 7;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
}
#endif