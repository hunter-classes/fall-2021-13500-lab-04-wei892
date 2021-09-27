/*
Name Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab4 Part C

this program will print a diagional cross based on the size it receives
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
