//------------------------------------------------------------------------------
// File:     greek.h
// Purpose:  Provde includes, namespaces, and function prototypes 
//	     
// Authors:  Rodger Swann
//------------------------------------------------------------------------------
#include <string>

using namespace std;


std::string indianToRoman(int num);
std::string romanDigit(int val);
int romanToIndian(std::string val);
int nextRomanValue(int val);
