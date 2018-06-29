//----------------------------------------------------------------------------=-
// File:     menu.cpp
// Purpose:  To provide menus and return choice to main.cpp
// Authors:  Rodger Swann
//----------------------------------------------------------------------------=-
#include "menu.h"

int show_menu(int num_items, string title, string choices[])
{
  //-------------------------
  // Locals for this funciton 
  //-------------------------
  int  choice       = 99;
  bool valid_choice = false;
  string cmd;

  //-----------
  // Print menu
  //-----------
  cout << endl << title << endl; 
  for(int i = 0; i < num_items; i++)
  {
    cout << "  "  <<  i+1  << ".)  "<< choices[i] << endl;
  }  


  //------------------------------------ 
  // Now loop until we get a good choice
  //------------------------------------ 
  do
  {
    cout << "Enter Choice(q to quit): ";
    cin >> choice;

    if(cin) 
    {
      //--------------------
      // Got a numeric input 
      //--------------------

      valid_choice = choice > 0 && choice <= num_items;

      if(!valid_choice)
      {
	cerr << "Invalid entry.  Please try again." << endl;
      }

    }
    else 
    {
      //------------------------------------
      // If here then non-pure-numeric input
      //------------------------------------

      //-----------------------
      // Clear the error flag
      //-----------------------

      cin.clear();

      //-----------------------
      // read stdin as a string
      //-----------------------

      cin >> cmd;

      //-----------------------
      // If I get a q then quit
      //-----------------------
      if(cmd == "q" )
      {
	return 0;
      }
      else
      {
	//-----------------------------------------------
	//clear the remaining stdin data
	//stop clearing when the 'streamsize' is reached
	//or we find a new line
	//-----------------------------------------------
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cerr << "Invalid entry.  Please try again." << endl;
      }	
    }
  }
  while(!valid_choice);

  //-----------------------------------------------------
  // Convert choice to one of the numbers defined in main
  //-----------------------------------------------------
  if(num_items > 2)
  {
    choice *= 100;
  }
  else
  {
    choice *= 1000;
  }

  return choice;
}



//--------------------------------------------------------------------
// Menu to get the MODE the program will run in .. Money || Numbers
//--------------------------------------------------------------------
int mode_menu(void)
{
  
  int NUMBER_MODE = 1000;
  int MONEY_MODE  = 2000;

  int menu_choice = 99; 

  string menu_title = "How are you going to use this program";
  string choices[4];

  choices[0] = "Number Conversion";
  choices[1] = "Currency Conversion";

  //Display menu
  menu_choice = show_menu(2, menu_title, &choices[0]);

  return menu_choice;
}



//--------------------------------------------------------------------
// Menu to get the system we are CONVERTING TO in
//--------------------------------------------------------------------
int to_menu(void)
{
  int menu_choice = 99;
  string menu_title = "What system would you like to convert to";
  string choices[4];

  choices[0] = "Roman/Etruscan";
  choices[1] = "Indian";
  choices[2] = "Hebrew";
  choices[3] = "Greek";

  //Display menu
  menu_choice = show_menu(4, menu_title, &choices[0]);

  return menu_choice;
}



//--------------------------------------------------------------------
// Menu to get the system we are CONVERTIN FROM 
//--------------------------------------------------------------------
int from_menu(void)
{
  int menu_choice = 99;
  string menu_title = "What system would you like to start with?";
  string choices[4];

  choices[0] = "Roman/Etruscan";
  choices[1] = "Indian";
  choices[2] = "Hebrew";
  choices[3] = "Greek";

  //Display menu
  menu_choice = show_menu(4, menu_title, &choices[0]);

  return menu_choice;
}



