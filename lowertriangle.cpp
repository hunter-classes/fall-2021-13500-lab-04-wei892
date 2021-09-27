/*

 */

#include <iostream>
#include "functions.h"

std::string lowerTraingle(int l)
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

