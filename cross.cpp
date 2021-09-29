/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 4 

this program is the cross functions
it will take in a number and print a diagonal cross

*/

#include <iostream>
#include "functions.h"

std::string cross(int s)
{
  std::string detail = "Input size: " + std::to_string(s) + "\n\n";

  std::string shape = "Shape: \n";

  for (int i = 0; i < s; i++)
    {
      for (int j = 0; j < s; j++)
	{
	  if (j == i || s-(j+1)== i)
	    {

	      shape += "*";
	    }
	  else
	    {
	      shape += " ";
	    }
	}
      shape += "\n";
    }
  return detail + shape;
}
