#include"NumberToRoman.h"
#include<vector>
/*Here while dealing with numbers above 40 substaction principle of roman numberals is not valid for few cases.
For example, "VL" is not a valid representation of 45 (XLV is correct).
Thats because only roman multiple of ten can preceed the higher roman numeral 
*/
string NumberToRoman::ToRoman(int num)
{
	int integerIndex[] = { 50, 40, 49, 10, 9, 5, 4, 1 }; 
	string romanIndex[] = { "L", "XL", "IL", "X", "IX", "V", "IV", "I" };
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
	int num = 49;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 45;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 89;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl; 
}
#endif