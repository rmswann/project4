//------------------------------------------------------------------------------
// File:     greek.cpp
// Purpose:  To convert greek integers to indian and indian numbers to greek 
// Authors:  Rodger Swann
//------------------------------------------------------------------------------
#include<iostream>
#include "greek.h"


//-----------------------------------------------------------------------------
// INDIAN to GREEK
//-----------------------------------------------------------------------------
string indianToGreek(int num)
{
    int val = 900;
    int n;
    string result="";

    do 
    {
        // Find the number of times 
        // 900,800,700,600,500,400... will go into
        // Number passed by user.  This tells me
        // How many times I will need to loop

	n = num / val;

	//add this character to the string n times
	for(int count=0; count<n; count++) 
	{
	    result = result + greekDigit(val);
	}

	//get the leftovers of the number
	num %= val;

	//get the next value
	val = nextGreekValue(val);

    } while(val != 0); //do all the values


    return result;
}


//Return the greek digit for the value
string greekDigit(int val)
{

  string result;

  if( val == 900 )
  {
    result="Sa";
  }
  else if( val == 800 )
  {
    result="Aw";
  }
  else if( val == 700 )
  {
    result="Ps";
  }
  else if( val == 600 )
  {
    result="Ch";
  }
  else if( val == 500 )
  {
    result="F";
  }
  else if( val == 400 )
  {
    result="Iy";
  }
  else if( val == 300 )
  {
    result="T";
  }
  else if( val == 200 )
  {
    result="S";
  }
  else if( val == 100 )
  {
    result="R";
  }
  else if( val == 90 )
  {
    result="Ku";
  }
  else if( val == 80 )
  {
    result="P";
  }
  else if( val == 70 )
  {
    result="O";
  }
  else if( val == 60 )
  {
    result="X";
  }
  else if( val == 50 )
  {
    result="N";
  }
  else if( val == 40 )
  {
    result="M";
  }
  else if( val == 30 )
  {
    result="L";
  }
  else if( val == 20 )
  {
    result="K";
  }
  else if( val == 10 )
  {
    result="Ey";
  }
  else if( val == 9 )
  {
    result="Th";
  }
  else if( val == 8 )
  {
    result="Ee";
  }
  else if( val == 7 )
  {
    result="Zd";
  }
  else if( val == 6 )
  {
    result="Va";
  }
  else if( val == 5 )
  {
    result="Eh";
  }
  else if( val == 4 )
  {
    result="D";
  }
  else if( val == 3 )
  {
    result="G";
  }
  else if( val == 2 )
  {
    result="B";
  }
  else if( val == 1 )
  {
    result="A";
  }

  return result;

}


//return the next value in the greek numeral sequence
int nextGreekValue(int val)
{

  int result;


  if( val == 900 )
  {
    result=800;
  }
  else if( val == 800 )
  {
    result=700;
  }
  else if( val == 700 )
  {
    result=600;
  }
  else if( val == 600 )
  {
    result=500;
  }
  else if( val == 500 )
  {
    result=400;
  }
  else if( val == 400 )
  {
    result=300;
  }
  else if( val == 300 )
  {
    result=200;
  }
  else if( val == 200 )
  {
    result=100;
  }
  else if( val == 100 )
  {
    result=90;
  }
  else if( val == 90 )
  {
    result=80;
  }
  else if( val == 80 )
  {
    result=70;
  }
  else if( val == 70 )
  {
    result=60;
  }
  else if( val == 60 )
  {
    result=50;
  }
  else if( val == 50 )
  {
    result=40;
  }
  else if( val == 40 )
  {
    result=30;
  }
  else if( val == 30 )
  {
    result=20;
  }
  else if( val == 20 )
  {
    result=10;
  }
  else if( val == 10 )
  {
    result=9;
  }
  else if( val == 9 )
  {
    result=8;
  }
  else if( val == 8 )
  {
    result=7;
  }
  else if( val == 7 )
  {
    result=6;
  }
  else if( val == 6 )
  {
    result=5;
  }
  else if( val == 5 )
  {
    result=4;
  }
  else if( val == 4 )
  {
    result=3;
  }
  else if( val == 3 )
  {
    result=2;
  }
  else if( val == 2 )
  {
    result=1;
  }
  else 
  {
      result = 0;
  }

  return result;
}

//-----------------------------------------------------------------------------
// GREEK to INDIAN
//-----------------------------------------------------------------------------

int greekToIndian(string str)
{
  string stored_str;
  string single_greek_digit;

  int value = 0;
  int sum   = 0;

  stored_str = str; // Store str in case we need the original value

  while(str.length() > 0)
  {
    // Grab a letter from the front of the string
    single_greek_digit = str[0];

    // Now erase it
    str = str.erase(0,1);

    // Now Convert letter to a numeric value 
    if(single_greek_digit == "A")
    { 
        //will be A or Aw so will need another char if(str[0] == 'w')
	if(str[0] == 'w')
	{		
	  value = 800;	// Aw
	  str = str.erase(0,1);
	}
	else
	{
	  value = 1;	// A
	}
    }
    else if(single_greek_digit == "B")
    {
	value = 2;	// B
    }
    else if(single_greek_digit == "C")
    {
	// Ch  so will need another char
	if( str[0] == 'h')
	{
	  value = 600;  // Ch
	  str = str.erase(0,1);
	}
	else
	{
	  // There is not a 'C' greek digit
	  cerr << "Invalid Greek Digit found: "
	       << "->{ " << single_greek_digit << " }<-"
	       << endl;
	  cerr << "Number Passed: " 
	       << "->{ " << stored_str << " }<-" 
	       << endl;
	  return -1;  // Using -1 as a return value
	}
    }
    else if(single_greek_digit == "D")
    {
	value = 4;	// D
    }
    else if(single_greek_digit == "E")
    {
      // Ee or  Eh or  Ey  need another char
	if( str[0] == 'h')
	{
	  value = 5;    // Eh
	  str = str.erase(0,1);
	}
	else if( str[0] == 'e')
	{
	  value = 8;    // Ee
	  str = str.erase(0,1);
	}
	else if( str[0] == 'y')
	{
	  value = 10;   // Ey
	  str = str.erase(0,1);
	}
	else
	{
	  // There is not a 'E' greek digit
	  cerr << "Invalid Greek Digit found: "
	       << "->{ " << single_greek_digit << " }<-"
	       << endl;
	  cerr << "Number Passed: " 
	       << "->{ " << stored_str << " }<-" 
	       << endl;
	  return -1; // using -1 as error
	}
    }
    else if(single_greek_digit == "F")
    {
	value = 500;	// F
    }
    else if(single_greek_digit == "G")
    {
	value = 3;	// G
    }
    else if(single_greek_digit == "I")
    {
      // Iy need another char
      if(str[0] == 'y')
      {
	value = 400;	// Iy
	str.erase(0,1);
      }
      else
      {
	// There is not a 'I' greek digit
	  cerr << "Invalid Greek Digit found: "
	       << "->{ " << single_greek_digit << " }<-"
	       << endl;
	  cerr << "Number Passed: " 
	       << "->{ " << stored_str << " }<-" 
	       << endl;
	  return -1;   // Using -1 as error
      }
    }
    else if(single_greek_digit == "K")
    {
      // K or Ku so need another
      if( str[0] == 'u')
      {
	  value = 90;	// Ku
	  str = str.erase(0,1);
      }
      else
      {
	value = 20;	// K
      }
    }
    else if(single_greek_digit == "L")
    {
      value = 30;	// L
    }
    else if(single_greek_digit == "M")
    {
	value = 40;	// M
    }
    else if(single_greek_digit == "N")
    {
	value = 50;	// N
    }
    else if(single_greek_digit == "O")
    {
	value = 70;	// O
    }
    else if(single_greek_digit == "P")
    {
      // P or Ps so need another char
      if( str[0] == 's')
      {
	value = 700;	// Ps
	str.erase(0,1);
      }
      else
      {
	value = 80;	// P
      }
    }
    else if(single_greek_digit == "R")
    {
	value = 100;	// R
    }
    else if(single_greek_digit == "S")
    {
      // S or Sa so need another char
      if(str[0] == 'a')
      {
	value = 900;	// Sa 
	str.erase(0,1);
      }
      else
      {
	value = 200;	// S 
      }
    }
    else if(single_greek_digit == "T")
    {
      // T or Th so need another char
      if(str[0] == 'h')
      {
	value = 9;	// Th
	str.erase(0,1);
      }
      else
      {
	value = 300;	// T
      }
    }
    else if(single_greek_digit == "V")
    {
	if(str[0] == 'a')
	{
	  value = 6;    // Va
	  str.erase(0,1);    
	}
	else
	{
	  // There is not a single 'V' in the Greek digits
	  cerr << "Invalid Greek Digit found: "
	       << "->{ " << single_greek_digit << " }<-"
	       << endl;
	  cerr << "Number Passed: " 
	       << "->{ " << stored_str << " }<-" 
	       << endl;
	  return -1;
	}	
    }
    else if(single_greek_digit == "X")
    {
	value = 60;	// X
    }
    else if(single_greek_digit == "Z")
    {
	if(str[0] == 'd')
	{
	  value = 7;    // Zd
	  str.erase(0,1);    
	}
	else
	{
	  // There is not a single 'Z' in the Greek Digits
	  cerr << "Invalid Greek Digit found: "
	       << "->{ " << single_greek_digit << " }<-"
	       << endl;
	  cerr << "Number Passed: " 
	       << "->{ " << stored_str << " }<-" 
	       << endl;
	  return -1;
	}	
    }
    else
    {
      // User passed greek digit that is completely invalid
      cerr << "Invalid Greek Digit found: "
	   << "->{ " << single_greek_digit << " }<-"
	   << endl;
      cerr << "Number Passed: " 
	   << "->{ " << stored_str << " }<-" 
	   << endl;
      return -1;
    }

    sum = sum + value;

  }// End While Loop

  return sum;
}


