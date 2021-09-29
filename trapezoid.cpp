/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab4 part F

this lap will print an updside down trapezoid based on given width and height
if the height is too large compared to its width, it'll print out impossible shape

*/

#include <iostream>
#include "functions.h"

std::string trapezoid (int w, int h)
{

  std::string detail = "Input width: " + std::to_string(w) +
    "\nInput height: " + std::to_string(h) + "\n\n";

  int s = w; //holder variable
  std::string shape = "Shape:\n";
  for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < s; j++)
	{
	  if (j < i)
	    {
	      shape += " ";
	    }
	  else
	    {
	      shape += "*";
	    }
	}
      s--;
      shape += "\n";
    }

  if (w-(w/2) < h) //if h is greater than half of the width
    {
      return "Impossible shape!";
    }
  else
    {
      return detail + shape;
    }

}
