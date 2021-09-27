

#include <iostream>
#include "functions.h"

std::string trapezoid.cpp(int w, int h)
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
