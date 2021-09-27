/*
Name Wei Lin Li

*/

#include <iostream>

std::string cross(int size)
{
  /*
    std::cout << "Input size: " << size << std::endl;
   */

  std::string shape = "Shape: \n";

  for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size; j++)
	{
	  if (j == i || size-(j+1)== i)
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
