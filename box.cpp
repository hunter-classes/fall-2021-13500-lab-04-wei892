/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab4 Part a

this program should take a width and height and print a solid box using *

*/

#include <iostream>
#include "functions.h"
#include <string>

std::string box(int w, int h)
{
  /*
  std::cout << "Input width: " << w << "\n";
  std::cout << "Input height: " << h << "\n";
  std::cout << "Shape" << "\n";
  */
  
  std::string output = "";
  for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
	{
	  output += "*";
	}
      output += "\n";
    }
  
  return output;
}
