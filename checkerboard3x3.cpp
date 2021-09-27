#include <iostream>
#include "functions.h"

std::string checkerboard3x3(int w, int h)
{
  /*
    std::cout << "Input side length" << l << std::endl;
  */
  
  std::string shape = "Shape:\n";
  for(int i = 0; i < h; i++)
    {
      for(int j = 0; j < w; col++)
	{
	  if((j/3 % 2 != 0) && (i/3 % 2 == 0))
	    {
	      shape += " ";
	    }
	  else if((j/3 % 2) == 0 && (i/3 % 2 != 0))
	    {
	      shape += " ";
	    }
	  else
	    {
	      shape += "*";
	    }
	}
    }
  return shape;
}
