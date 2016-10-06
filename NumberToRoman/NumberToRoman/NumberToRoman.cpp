#include"NumberToRoman.h"
/////////////////////////////////////////////////////////////////////////////
// NumberToRoman.cpp - To define function to convert integer to roman      //
//																		   //
// ver 1.0                                                                 //
// ----------------------------------------------------------------------- //
// copyright © Medha Reddy Kuninty, 2016                                   //
// All rights granted provided that this notice is retained                //
// ----------------------------------------------------------------------- //
// Language:    Visual C++, Visual Studio 2015                             //
// Platform:    ASUS SonicMaster, Core i3, Windows 10                      //		                                       
// Author:      Medha Reddy Kuninty,Syracuse         					   //
//              (717)-891-7128, mkuninty@syr.edu                           //
/////////////////////////////////////////////////////////////////////////////




/*Here while dealing with numbers above 40 substaction principle of roman numberals is not valid for few cases.
For example, "VL" is not a valid representation of 45 (XLV is correct).
Thats because only roman multiple of ten can preceed the higher roman numeral 
*/
string NumberToRoman::ToRoman(int num)
{
	int integerIndex[] = { 1000, 900, 990, 999, 500, 400, 490, 499, 100, 90, 99, 50, 40, 49, 10, 9, 5, 4, 1 };
	string romanIndex[] = { "M", "CM", "XM", "IM", "D", "CD", "XD", "ID", "C", "XC", "IC", "L", "XL", "IL", "X", "IX", "V", "IV", "I" };
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

/*Test stub for Number to Roman Convertion*/
#ifdef TEST
int main()
{
	int num = 99;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 590;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 3999;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl; 
}
#endif