#include"NumberToRoman.h"
string NumberToRoman::ToRoman(int num)
{
	string roman = "";
	for (int i = 0; i < num; i++)
		roman = roman + "I";
	return roman;
}

#ifdef TEST
int main()
{
	int num = 1;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num)<<endl;
	num++;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num++;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
}
#endif