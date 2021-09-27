/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab4 part e

this program will print the top right half of a square based on the side length

 */

#include <iostream>
#include "functions.h"

std::string upper(int l)
{
  /*
    std::cout << "Input side length" << l << std::endl;
  */

  std::string shape = "Shape:\n";

  for (int i = l; i > 0; i--)
    {
      for (int j = l; j > 0; j--)
	{
	  if (j <= i)
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
  return shape;

}
