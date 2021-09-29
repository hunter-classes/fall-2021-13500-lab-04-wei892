/*
Name: Wei Lin Li
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 4 

this is the main program that will run the functions

*/


#include <iostream>
#include "functions.h"

int
main ()
{
  //test for box
  //test one
  std::string resultBox;
  resultBox = box (3, 5);
  std::cout << "box(3, 5):\n";
  std::cout << resultBox;
  std::cout << "\n------------------\n\n";// seperator

  //test two
  resultBox = box (7, 4);
  std::cout << "box(7, 4):\n";
  std::cout << resultBox;
  std::cout << "\n------------------\n\n";// seperator

  //test three
  resultBox = box (23, 5);
  std::cout << "box(23, 5):\n";
  std::cout << resultBox;
  std::cout << "\n------------------\n\n";// seperator

  //test for checkerboard
  //test one
  std::string resultCheckerboard;
  std::cout << "checkerboard(23, 5):\n";
  resultCheckerboard = checkerboard(11, 6);
  std::cout << resultCheckerboard;
  std::cout << "\n------------------\n\n";// seperator

  //test two
  resultCheckerboard = checkerboard(7, 4);
  std::cout << "checkerboard(7, 4):\n";
  std::cout << resultCheckerboard;
  std::cout << "\n------------------\n\n";// seperator

  //test three
  resultCheckerboard = checkerboard(3, 2);
  std::cout << "checkerboard(3, 2):\n";
  std::cout << resultCheckerboard;
  std::cout << "\n------------------\n\n";// seperator

  std::string resultCross;
  //tests for cross
  //test one
  resultCross = cross(8);
  std::cout << "cross(8):" << std::endl;
  std::cout << resultCross;
  std::cout << "\n------------------\n\n";//seperator

  //test two
  resultCross = cross(7);
  std::cout << "cross(7):" << std::endl;
  std::cout << resultCross;
  std::cout << "\n------------------\n\n";//seperator

  //test three
  resultCross = cross(13);
  std::cout << "cross(13):" << std::endl;
  std::cout << resultCross;
  std::cout << "\n------------------\n\n";//seperator


  //test for lower triangle
  std::string resultLower;

  //test one
  resultLower = lower(6);
  std::cout << "lower(6):" << std::endl;
  std::cout <<  resultLower;
  std::cout << "\n------------------\n\n";//seperator

  //test two
  resultLower = lower(8);
  std::cout << "lower(8):" << std::endl;
  std::cout <<  resultLower;
  std::cout << "\n------------------\n\n";//seperator

  //test three
  resultLower = lower(11);
  std::cout << "lower(11):" << std::endl;
  std::cout <<  resultLower;
  std::cout << "\n------------------\n\n";//seperator

  //test for upper
  std::string resultUpper;
  //test one
  resultUpper = upper(5);
  std::cout << "upper(5): " << std::endl;
  std::cout << resultUpper;
  std::cout << "\n------------------\n\n";//seperator

  //test two
  resultUpper = upper(7);
  std::cout << "upper(7): " << std::endl;
  std::cout << resultUpper;
  std::cout << "\n------------------\n\n";//seperator

  //test three
  resultUpper = upper(10);
  std::cout << "upper(10): " << std::endl;
  std::cout << resultUpper;
  std::cout << "\n------------------\n\n";//seperator

  //test for trapezoid
  std::string resultTrape;
  //test one
  resultTrape = trapezoid(12, 5);
  std::cout << "trapezoid(12, 5): " << std::endl;
  std::cout <<  resultTrape;
  std::cout << "\n------------------\n\n";//seperator

  //test two
  resultTrape = trapezoid(5, 3);
  std::cout << "trapezoid(5, 3): " << std::endl;
  std::cout <<  resultTrape;
  std::cout << "\n------------------\n\n";//seperator

  //test three
  resultTrape = trapezoid(12, 7);
  std::cout << "trapezoid(12, 7): " << std::endl;
  std::cout <<  resultTrape;
  std::cout << "\n------------------\n\n";//seperator

  //test for checkerboard3x3
  std::string resultCheck3x3;
  //test one
  resultCheck3x3 = checkerboard3x3(16, 11);
  std::cout << "checkerboard3x3(16, 11):" << std::endl;
  std::cout << resultCheck3x3;
  std::cout << "\n------------------\n\n";//seperator

  //test two
  resultCheck3x3 = checkerboard3x3(27, 27);
  std::cout << "checkerboard3x3(27, 27):" << std::endl;
  std::cout << resultCheck3x3;
  std::cout << "\n------------------\n\n";//seperato

  //test three
  resultCheck3x3 = checkerboard3x3(5, 7);
  std::cout << "checkerboard3x3(5, 7):" << std::endl;
  std::cout << resultCheck3x3;
  std::cout << "\n------------------\n\n";//seperato

  return 0;
}
