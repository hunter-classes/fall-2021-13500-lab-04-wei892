/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab4 part d

this program with print the bottom left half of a square
based on the side length
 */

#include <iostream>
#include "functions.h"

std::string lowerTriangle(int l)
{
  /* 
     std::cout << "Input side length" << l << std::endl;
  */
  std::string shape = "Shape:";

  for (int i = 0; i <= l; i++)
    {
      for (int j = i; j > 0; j--)
	{
	  shape += "*";
	}
      shape += "\n";
    }
  return shape;

}

