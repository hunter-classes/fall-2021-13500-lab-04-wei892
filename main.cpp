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
  std::string resultBox;
  std::cout << "Input Width: 7" << std::endl;
  std::cout << "Input height: 5" << std::endl;
  resultBox = box(7, 5);
  std::cout << resultBox;

  std::cout << "\n" << "Input Width: 3" << std::endl;
  std::cout << "Input height: 3" << std::endl;
  resultBox = box(3, 3);
  std::cout << resultBox;

  std::cout << "\n" << "Input Width: 4" << std::endl;
  std::cout << "Input height: 7" << std::endl;
  resultBox = box(4, 7);
  std::cout << resultBox;
  
  //testing checkerboard function
  std::string testChecker;

  std::cout << "\n" << "Input width: 11 " << std::endl;
  std::cout << "Intput height: 6" << std::endl;
  testChecker = checkerboard(11, 6);

  std::cout << "Input width: 10" << std::endl;
  std::cout << "Intput height: 9" << std::endl;
  testChecker = checkerboard(10, 9);

  std::cout << "Input width: 4 " << std::endl;
  std::cout << "Intput height: 3" << std::endl;
  testChecker = checkerboard(4, 3);

  //testing cross
  std::string testCross;

  std::cout << "\n" << "Input size: 18 " << std::endl;
  testCross = cross(18);

  std::cout << "\n" << "Input size: 10" << std::endl;
  testCross = cross(5);

  std::cout << "\n" << "Input size: 4 " << std::endl;
  testCross = cross(4);

  //testing lower triangle
  std::string testLow;

  std::cout << "\n" << "Input side: 18 " << std::endl;
  testLow = lowerTriangle(6);

  std::cout << "\n" << "Input side: 10" << std::endl;
  testLow = lowerTriangle(10);

  std::cout << "\n" << "Input side: 4 " << std::endl;
  testLow = lowerTriangle(4);

  //testing upper triangle
  std::string testUpper;

  std::cout << "\n" << "Input side: 18 " << std::endl;
  testUpper = upper(5);

  std::cout << "\n" << "Input side: 10" << std::endl;
  testUpper = upper(10);

  std::cout << "\n" << "Input side: 4 " << std::endl;
  testUpper = upper(4);

  //testing upside down trapezoid
  std::string testTrape;

  std::cout << "\n" << "Input width: 12 " << std::endl;
  std::cout << "Input height: 5" << std::endl;
  testTrape = trapezoid(12, 5);

  std::cout << "\n" << "Input width: 5" << std::endl;
  std::cout << "Input height: 3" << std::endl;
  testTrape = trapezoid(5, 3);

  std::cout << "\n" << "Input width: 12" << std::endl;
  std::cout << "Input height: 7" << std::endl;
  std::cout << "This test should return impossible shape" << std::endl;
  testTrape = trapezoid(12, 7);

  //testing upside down trapezoid
  std::string test3x3;

  std::cout << "\n" << "Input width: 16 " << std::endl;
  std::cout << "Input height: 11" << std::endl;
  test3x3 = checkerboard3x3(16, 11);

  std::cout << "\n" << "Input width: 27" << std::endl;
  std::cout << "Input height: 27" << std::endl;
  test3x3 = checkerboard3x3(27, 27);

  std::cout << "\n" << "Input width: 12" << std::endl;
  std::cout << "Input height: 7" << std::endl;
  test3x3 = checkerboard3x3(12, 7);
  


  return 0;
}
