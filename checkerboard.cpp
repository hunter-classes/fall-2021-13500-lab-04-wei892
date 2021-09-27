/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab4 part b 

*/

#include <iostream>
#include "functions.h"
#include <string>

std::string checkerboard(int w, int h)
{
  /*
  std::cout << "Input width: " << w << std::endl;
  std::cout << "Input height: " << h << std::endl;

  std::cout << "Shape: " << std::endl;
  */
  std::string shape = "";

  //for loop for height
  for (int i = 0; i < h; i++)
    {
      //for loop for width
      //remember the first line starts *
      //and second line starts with space
      for (int j = 0; j < w; i++)
	{
	  //if h = odd, and w = odd put *
	  //if h = odd and w = even, put space
	  //if h = even, w = odd, put space
	  //if h = even, w == even put *

	  if (h%2 != 0 && w%2 != 0) //statement one
	    {
	      shape += "*";
	    }
	  else if (h%2 != 0 && w%2 == 0) //statment two
	    {
	      shape += " "; 
	    }
	  else if (h%2 == 0 && w%2 != 0) //statement three
	    {
	      shape += "*";
	    }
	  else if (h%2 == 0 && w%2 == 0) //statement four
	    { 
	      shape += " ";
	    }
	}
      shape += "\n";
    }
  return shape;
  
  return 0;
}
