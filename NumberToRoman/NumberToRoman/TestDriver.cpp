#include"NumberToRoman.h"
#ifdef TEST2
int main()
{

	int num = 1;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 3;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 4;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 7;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 39;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 19;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 15;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
}
#endif


