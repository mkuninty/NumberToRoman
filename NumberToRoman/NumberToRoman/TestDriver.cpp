#include"NumberToRoman.h"
#include<exception>
/////////////////////////////////////////////////////////////////////////////
// TestDriver.cpp - To test all cases of integer to roman                  //
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

void test(){
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
	num = 49;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 45;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 89;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 99;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 590;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
	num = 3999;
	cout << "Converting number " << num << " to Roman:  " << NumberToRoman::ToRoman(num) << endl;
}
#ifdef TEST2
/*Entry point of the application*/
int main(int argc, char* argv[])
{
	try{
		if (argc > 1){
			string input_str = argv[1];
			if (input_str == "test") { test(); return 1; }

			int input = stoi(input_str);
			cout << "Converting number " << input << " to Roman:  " << NumberToRoman::ToRoman(input) << endl;
		}
		else{
			cout << "Please enter input number that you want to convert into roman number as command line argument!!"<<endl;
		}
	}
	catch (exception ex){
		cout << "Enter a numeric argument. Error: "<<ex.what() << endl;
	}
}
#endif


