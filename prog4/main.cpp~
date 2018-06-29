//------------------------------------------------------------------------------
// File:     main.cpp
// Purpose:  Get input via a menu system and covert betwee then Roman, Greek, 
//	     Indian, and Hebrew number and weight systems 
// Authors:  Rodger Swann
//------------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// The following is used for the weight computations
//-----------------------------------------------------------------------------
/*
   Roman_Coin/2.5   = 1
   Greek_Coin/4.3   = 1 Indian_Coin/11.5 = 1
   Hebrew_Coin/11   = 1

   Roman = (2.5/4.3)  * Greek
   Roman = (2.5/11.5) * Indian  
   Roman = (2.5/11)   * Hebrew  

   Greek = (4.3/2.5)  * Roman
   Greek = (4.3/11.5) * Indian
   Greek = (4.3/11)   * Hebrew 

   Indian = (11.5/2.5) * Roman
   Indian = (11.5/4.3) * Greek
   Indian = (11.5/11) * Hebrew

   Hebrew = (11/2.5) * Roman
   Hebrew = (11/4.3) * Greek
   Hebrew = (11/11.5) * Indian

   Roman:Sesterii:2.5:grams
   Greek:Drachma:4.3:grams
   Indian:Rupee:11.5:grams
   Hebrew:Shekel:11 grams --  But ranged from 7 to 17 grams

  Sources:
  https://en.wikipedia.org/wiki/Denarius
  https://en.wikipedia.org/wiki/Sestertius
  https://sp88k.home.xs4all.nl/Coin/Traveler/General/Roman%20Money.htm
  https://en.wikipedia.org/wiki/Shekel
*/
//-----------------------------------------------------------------------------
#include<iostream>
#include<string>
//#include "hebrew.h"
#include "greek.h"
#include "roman.h"
#include "menu.h"

using namespace std;


//---------------------------------
// Function prototypes for main.cpp
//---------------------------------
void perform_conversion(int program_mode, int from_system, int to_system);
void clear_screen(void);
int input_int(string prompt);
string input_str(string prompt);


//------------------------------------------------------------------------------
// The main function ... It all starts here
//------------------------------------------------------------------------------
int main()
{
  // Variables used to setup money conversion mode or number conversion mode
  const int NUMBER_MODE = 1000;
  const int MONEY_MODE  = 2000;

  // Variables used to set to and from systems 
  const int ROMAN	= 100;
  const int INDIAN      = 200;
  const int HEBREW      = 300;
  const int GREEK       = 400;

  // Variables to store the program setup
  // That is:  numbers or money; from/to systems
  int program_mode = 0;
  int from_system  = 0;
  int to_system    = 0; 


  // Variables for determining re-run
  string rerun;
  bool done = false;

  while(!done)
  {

    //-------------
    // Clear Screen
    //-------------

    clear_screen();

    //-------------------------------
    // Print the pretty program title
    //-------------------------------
    
    cout << "Welcome to Reg and Stan's Number Writer 500(BC)" << endl;

    //-----------------------------------
    // Are we converting numbers or money
    //-----------------------------------

    program_mode = mode_menu();

    //---------------
    // Check for exit
    //---------------

    if(!program_mode)
    {
      return 0;
    }

    //-------------
    // Clear Screen
    //-------------

    clear_screen();

    //---------------------
    // Converting from menu 
    //---------------------

    from_system  = from_menu();

    //---------------
    // Check for exit
    //---------------

    if(!from_system)
    {
      return 0;
    }

    //-------------
    // Clear Screen
    //-------------

    clear_screen();

    //-------------------
    // Converting to menu
    //-------------------

    to_system = to_menu();

    //---------------
    // Check for exit
    //---------------

    if(!to_system)
    {
      return 0;
    }

    //---------------------
    // Make the converstion
    //---------------------

    perform_conversion(program_mode, from_system, to_system);

    //---------------------
    // Another run? 
    //---------------------
    cout << "Convert Another? ";
    cin >> rerun;

    if( rerun == "y" || rerun == "Y")
    {
      done = false;
    }
    else
    {
      done = true;
    }

  }
  
  return 0;
}



//------------------------------------------------------------------------------
// Function to get numeric input from keyboard 
//------------------------------------------------------------------------------
int input_int(string prompt)
{
  int data  = -1;
  bool done = false;

  do
  {
    cout << prompt; 
    cin  >> data;
    
    if(!cin.fail())
    {
      done=true;
    }
    else if(cin.fail())
    {
      // Clear the error flag
      cin.clear(); 
      // Dump the rest of the cin stream 
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cerr << "Invalid entry.  Please enter a numeric value." << endl;
    }
  }
  while(!done);

  return data;
}



//------------------------------------------------------------------------------
// Function to get numeric input from keyboard 
//------------------------------------------------------------------------------
string input_str(string prompt)
{
  string data;

  cout << prompt; 
  cin  >> data;

  return data;
}


//------------------------------------------------------------------------------
// Function to mimic clearing the screen 
//------------------------------------------------------------------------------
void clear_screen(void)
{
  for(int i = 0; i <= 200; i++)
  {
    cout << endl;
  }
}


//------------------------------------------------------------------------------
//  Function that performs conversion
//------------------------------------------------------------------------------
void perform_conversion(int program_mode, int from_system, int to_system)
{

  //------------------------------------------------------------------------
  // Variables used to setup money conversion mode or number conversion mode
  //------------------------------------------------------------------------
  const int NUMBER_MODE = 1000;
  const int MONEY_MODE  = 2000;

  //------------------------------------------
  // Variables used to set to and from systems 
  //------------------------------------------
  const int ROMAN	= 100;
  const int INDIAN      = 200;
  const int HEBREW      = 300;
  const int GREEK       = 400;

  //------------------------------------------
  // Variables used to set to and from systems 
  //------------------------------------------
    double drachma   = 0.0;
    double sestersii = 0.0;
    double rupee     = 0.0;
    double shekkel   = 0.0;


  //------------------------------------------------------------------
  // We'll be getting the starting values in the conditional
  // block below. It can be string in some cases and an int in others 
  //------------------------------------------------------------------
  int from_value_num = 0;
  int tmp_int        = 0;
  string from_value_str;
  string tmp_str;

  

  //-------------------------------------------------
  // The if-then-else block to process conversion 
  //-------------------------------------------------

  if(program_mode == NUMBER_MODE) // Convert Numbers Mode
  {
    //-------------------------------------------------
    // FROM Roman NUMBER system to ...
    //-------------------------------------------------
    if(from_system == ROMAN && to_system == ROMAN)
    {
      //Get Value to convert
      from_value_str = input_str("Enter Value to Convert: ");

      // No conversion required

      // Output results 
      cout << from_value_str << " = " << from_value_str << endl;
    }
    else if(from_system == ROMAN && to_system == INDIAN)
    {
      //cout << romanToIndian() << endl;
      cout << "TO DO -> Emily" << endl;
    }
    else if(from_system == ROMAN && to_system == HEBREW)
    {
      //cout << romanToHebrew() << endl;
      cout << "TO DO -> ?" << endl;
    }
    else if(from_system == ROMAN && to_system == GREEK)
    {
      //cout << romanToGreek() << endl;
      cout << "TO DO -> Emily's code Rodger's code" << endl;
    }
    //-------------------------------------------------
    // FROM Indian NUMBER system to ...
    //-------------------------------------------------
    else if(from_system == INDIAN && to_system == INDIAN)
    {
      //Get Value to convert
      from_value_num = input_int("Enter Value to Convert: ");

      // No conversion required

      // Output results 
      cout << from_value_num << " = " << from_value_num << endl;
    }
    else if(from_system == INDIAN && to_system == HEBREW )
    {
      //indianToHebrew;
      //from_value_num = input_int("Enter Value to Convert: ");
      cout << "TO DO" << endl;
    }
    else if(from_system == INDIAN && to_system == ROMAN)
    {
      // Get the value to convert
      from_value_num = input_int("Enter Value to Convert: ");

      // Make the conversion
      tmp_str = indianToRoman(from_value_num);

      // Output results
      cout << from_value_num << " = " << tmp_str << endl;

    }
    else if(from_system == INDIAN && to_system == GREEK)
    {
      // Get value to convert
      from_value_num = input_int("Enter Value to Convert: ");

      // Make the conversion
      tmp_str = indianToGreek(from_value_num);

      // Output results
      cout << from_value_num << " = " << tmp_str << endl;

    }
    //-------------------------------------------------
    // FROM Hebrew NUMBER system to ...
    //-------------------------------------------------
    else if(from_system == HEBREW && to_system == HEBREW)
    {
      //Get Value to convert
      from_value_str = input_str("Enter Value to Convert: ");

      // No conversion required

      // Output results 
      cout << from_value_num << " = " << from_value_num << endl;
    }
    else if(from_system == HEBREW && to_system == INDIAN )
    {
      // hebrewToIndian();
      from_value_str = input_str("Enter Value to Convert: ");
      // Output results 
      cout << "TO DO" << endl;
    }
    else if(from_system == HEBREW && to_system == ROMAN)
    {
      // hebrewToRoman();
      from_value_str = input_str("Enter Value to Convert: ");
      // Output results 
      cout << "TO DO" << endl;
    }
    else if(from_system == HEBREW && to_system == GREEK)
    {
      // hebrewToGreek();
      from_value_str = input_str("Enter Value to Convert: ");
      // Output results 
      cout << "TO DO" << endl;
    }
    //-------------------------------------------------
    // FROM Greek NUMBER system to ...
    //-------------------------------------------------
    else if(from_system == GREEK && to_system == GREEK)
    {
      //Get Value to convert
      from_value_str = input_str("Enter Value to Convert: ");

      // No conversion required

      // Output results 
      cout << from_value_num << " = " << from_value_num << endl;
    }
    else if(from_system == GREEK && to_system == INDIAN)
    {
      // Get Greek Number
      from_value_str = input_str("Enter Value to Convert: ");

      // Convert it
      tmp_int = greekToIndian(from_value_str);

      //Output result
      cout << from_value_str << " = " << tmp_int << endl;
    }
    else if(from_system == GREEK && to_system == HEBREW)
    {
      // Get Greek Number
      from_value_str = input_str("Enter Value to Convert: ");

      // Convert it
      // greekToHebrew();
    
      //Output result
      cout << "TO DO ->" << endl;
    }
    else if(from_system == GREEK && to_system == ROMAN)
    {
      //greekToRoman();

      // Get Greek Number
      from_value_str = input_str("Enter Value to Convert: ");

      // Convert it in two steps:
      // 1.  First Greek to Indian
      tmp_int = greekToIndian(from_value_str);

      // 2.  Second Indian to Roman
      tmp_str = indianToRoman(tmp_int);


      //Output result
      cout << from_value_str << " = " << tmp_str << endl;
    }
  }
  else // Convert Currency Mode
  {
    //-------------------------------------------------
    // FROM Roman MONEY system to ...
    //-------------------------------------------------
    if(from_system == ROMAN && to_system == ROMAN)
    {
      //Get Value to convert
      from_value_num = input_int("Enter Value to Convert(in Sesterii): ");

      // No conversion required

      // Output results 
      cout << from_value_num << " = " << from_value_num << endl;
    }
    else if(from_system == ROMAN && to_system == INDIAN)
    {
      cout << "Enter Value to Convert(in Sesterii): ";
      cin  >> sestersii; 
      rupee = (11.5/2.5) * sestersii;
      cout << sestersii << " sestersii = " 
	   << rupee << " rupee" << endl;
    }
    else if(from_system == ROMAN && to_system == HEBREW)
    {
      cout << "Enter Value to Convert(in Sesterii): ";
      cin  >> sestersii; 
      shekkel = (11/2.5)*sestersii;
      cout << sestersii << " sestersii = " << shekkel 
	   << " shekkel" << endl;
    }
    else if(from_system == ROMAN && to_system == GREEK)
    {
      cout << "Enter Value to Convert(in Sesterii): ";
      cin  >> sestersii; 
      drachma = (4.3/2.5)*sestersii;
      cout << sestersii << " sestersii = " << shekkel 
	   << " drachma" << endl;
    }
    //-------------------------------------------------
    // FROM Indian MONEY system to ...
    //-------------------------------------------------
    else if(from_system == INDIAN && to_system == INDIAN)
    {
      //Get Value to convert
      from_value_num = input_int("Enter Value to Convert(in Rupees): ");

      // No conversion required

      // Output results 
      cout << from_value_num << " = " << from_value_num << endl;
    }
    else if(from_system == INDIAN && to_system == HEBREW )
    {
      from_value_num = input_int("Enter Value to Convert(in Rupees): ");
      cout << "TO DO" << endl;
    }
    else if(from_system == INDIAN && to_system == ROMAN)
    {
      from_value_num = input_int("Enter Value to Convert(in Rupees): ");
      cout << "TO DO" << endl;
    }
    else if(from_system == INDIAN && to_system == GREEK)
    {
      from_value_num = input_int("Enter Value to Convert(in Rupees): ");
      cout << "TO DO" << endl;
    }
    //-------------------------------------------------
    // FROM Hebrew MONEY system to ...
    //-------------------------------------------------
    else if(from_system == HEBREW && to_system == HEBREW)
    {
      //Get Value to convert
      from_value_num = input_int("Enter Value to Convert(in Shekkels): ");

      // No conversion required

      // Output results 
      cout << from_value_num << " = " << from_value_num << endl;
    }
    else if(from_system == HEBREW && to_system == INDIAN )
    {
      from_value_num = input_int("Enter Value to Convert(in Shekkels): ");
      cout << "TO DO" << endl;
    }
    else if(from_system == HEBREW && to_system == ROMAN)
    {
      from_value_num = input_int("Enter Value to Convert(in Shekkels): ");
      cout << "TO DO" << endl;
    }
    else if(from_system == HEBREW && to_system == GREEK)
    {
      from_value_num = input_int("Enter Value to Convert(in Shekkels): ");
      cout << "TO DO" << endl;
    }
    //-------------------------------------------------
    // FROM Greek MONEY system to ...
    //-------------------------------------------------
    else if(from_system == GREEK && to_system == GREEK)
    {
      //Get Value to convert
      from_value_num = input_int("Enter Value to Convert(in Drachma): ");

      // No conversion required

      // Output results 
      cout << from_value_num << " = " << from_value_num << endl;
    }
    else if(from_system == GREEK && to_system == INDIAN)
    {
      from_value_num = input_int("Enter Value to Convert(in Drachma): ");
      cout << "TO DO" << endl;
    }
    else if(from_system == GREEK && to_system == HEBREW)
    {
      from_value_num = input_int("Enter Value to Convert(in Drachma): ");
      cout << "TO DO" << endl;
    }
    else if(from_system == GREEK && to_system == ROMAN)
    {
      from_value_num = input_int("Enter Value to Convert(in Drachma): ");
      cout << "TO DO" << endl;
    }
  }
}


