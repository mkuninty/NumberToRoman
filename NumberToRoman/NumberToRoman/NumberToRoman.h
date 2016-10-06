/////////////////////////////////////////////////////////////////////////////
// NumberToRoman.h - To define function to convert integer to roman        //
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

/*
Package:
--------
This package is used to convert arabic numerals to roman. 
This contains 3 files, NumberToRoman.h & NumberToRoman.cpp which the decleration and implementation of the conversion alng with 
	TestDriver.cpp that has all the test cases.

public Interfaces:
------------------
static string ToRoman(int num)  -Method to convert intergers to roman numerals

Required Files:
---------------
NumberToRoman.h, NumberToRoman.cpp and TestDriver.cpp

Maintenance History:
--------------------
ver 1.0 Oct 10 2016
*/


/* Converts integer to roman from 1-3999*/
#include <iostream>
#include<string>
using namespace std;
class NumberToRoman
{
public:
	static string ToRoman(int num);
};