/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 4 

this is the box function
it will take in 
a Width
and a height 
and then return a box made of * based on the values

*/


#include <iostream>
#include "functions.h"

std::string box (int w, int h)
{
  //int w;
  //int h;
  //std::cout << "Input Width: 7" << std::endl;

  //std::cin >> w;
  //std::cin >> h;

  std::string inputs =  "Input width: " + std::to_string (w) +
    "\nInput height: " + std::to_string (h) + "\n\n";
  //std::cout << inputs << std::endl;

  std::string output = "Shapes:\n";
  for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
	{
	  output += "*";
	}
      output += "\n";
    }

  return inputs + output;
}
