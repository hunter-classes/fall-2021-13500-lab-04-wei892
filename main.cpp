/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab

this is the main file where all the functions will 
be called to accomplish the task
*/

#include <iostream>
#include "functions.h"

int main()
{
  //testing the box function
  std::string result;
  result = box(7, 5);
  std::cout << result;
  
  //testing checkerboard function
  result = checkerboard(11, 6);
  std::cout << result;
  return 0;
}
