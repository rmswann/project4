//------------------------------------------------------------------------------
// File:     menu.h
// Purpose:  Provde includes, namespaces, and function prototypes 
//	     
// Authors:  Rodger Swann
//------------------------------------------------------------------------------
#include<iostream>
#include<limits>

using namespace std;


// Function prototypes
int show_menu(int num_items, string menu_title, string choices[]);
int mode_menu(void);
int to_menu(void);
int from_menu(void);
void clear_screen();

