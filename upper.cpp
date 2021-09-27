/*


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
