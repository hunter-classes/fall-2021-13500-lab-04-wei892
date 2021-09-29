/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 4 

this is the checkerboard function
it will take in int values passed through the parameter
and print a checkerboard with spaces and *

*/

#include <iostream>
#include "functions.h"

std::string checkerboard(int w, int h)
{
  std::string detail = "Input width: " + std::to_string(w) +
    "\nInput height: " + std::to_string(h) + "\n\n";

  std::string shape = "Shape:\n";

  for (int i = 1; i<=h; i++)
    {
      for (int j = 1; j<=w; j++)
	{
	  if (i % 2 == 1 && j % 2 == 1) //if i is odd and j is odd
	    {
	      shape += "*";
	    }
	  else if (i % 2 == 1 && j % 2 == 0) //if i is odd and j is even
	    {
	      shape += " ";
	    }
	  else if (i % 2 == 0 && j % 2 == 0) // if both i and j is even
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

  return  detail + shape;
}
