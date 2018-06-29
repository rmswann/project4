//----------------------------------------------------------------------------=-
// File:     roman.cpp
// Purpose:  To convert greek numbers to indian and indian numbers to greek 
// Authors:  Emily Constantin, Rodger Swann 
//----------------------------------------------------------------------------=-
#include "roman.h"


//Returns a string representation of the roman numeral.
string indianToRoman(int num)
{
    int val = 1000;
    int n;
    string result="";


    do 
    {
	//figure out how many of this one we need
	n = num / val;

	//add this character to the string n times
	for(int count=0; count<n; count++) 
	{
	    result = result + romanDigit(val);
	}


	//get the leftovers of the number
	num %= val;

	//get the next value
	val = nextRomanValue(val);

    } while(val != 0); //do all the values


    return result;
}


//Return the roman digit for the value
string romanDigit(int val)
{
    string result;


    if(val == 1000) 
    {
	result = "M";
    } 
    else if(val == 900) 
    {
	result = "CM";
    } 
    else if(val == 500) 
    {
	result = "D";
    } 
    else if(val == 400) 
    {
	result = "CD";
    } 
    else if(val == 100) 
    {
	result = "C";
    } 
    else if(val == 90) 
    {
	result = "XC";
    } 
    else if(val == 50) 
    {
	result = "L";
    } 
    else if(val == 40) 
    {
	result = "XL";
    } 
    else if(val == 10) 
    {
	result = "X";
    } 
    else if(val == 9) 
    {
	result = "IX";
    } 
    else if(val == 5) 
    {
	result = "V";
    } 
    else if(val == 4) 
    {
	result = "IV";
    } 
    else if(val == 1) 
    {
	result = "I";
    }


    return result;
}


//return the next value in the roman numeral sequence
int nextRomanValue(int val)
{
    int result;


    if(val == 1000) 
    {
	result = 900;
    } 
    else if(val == 900) 
    {
	result = 500;
    } 
    else if(val == 500) 
    {
	result = 400;
    } 
    else if(val == 400) 
    {
	result = 100;
    } 
    else if(val == 100) 
    {
	result = 90;
    } 
    else if(val == 90) 
    {
	result = 50;
    } 
    else if(val == 50) 
    {
	result = 40;
    } 
    else if(val == 40) 
    {
	result = 10;
    } 
    else if(val == 10) 
    {
	result = 9;
    } 
    else if(val == 9) 
    {
	result = 5;
    } 
    else if(val == 5) 
    {
	result = 4;
    } 
    else if(val == 4) 
    {
	result = 1;
    } 
    else 
    {
	result = 0;
    }


    return result;
}
