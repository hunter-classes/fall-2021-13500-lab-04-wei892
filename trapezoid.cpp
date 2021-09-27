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

std::string trapezoid(int w, int h)
{
  /*
  int h;
  int w;
  std::cin >> w;
  std::cin >> h;
  std::cout << "Input side length" << l << std::endl;
  */

  std::string shape = "Shape:\n";

  for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
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
      w--;
      shape += "\n";
    }

  int s = w; //holder variable
  if (w - (s/2) < h)
    {
      return "Impossible shape!";
    }
  else
    {
      return shape;
    }

}
