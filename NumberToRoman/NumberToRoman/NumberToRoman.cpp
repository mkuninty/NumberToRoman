#include"NumberToRoman.h"
#include<vector>
string NumberToRoman::ToRoman(int num)
{
	int integerIndex[] = { 10, 9, 5, 4, 1 };
	string romanIndex[] = { "X", "IX", "V", "IV", "I" };
	string roman = "";
	int index = 0;
	while (num>0)
	{ 
		if (num / integerIndex[index] > 0)
		{
			roman += romanIndex[index];
			num = num - integerIndex[index];
		}
		else
			index++;
	}
	return roman;
}

#ifdef TEST
int main()
{
	int num = 39;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 19;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 15;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
}
#endif