/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Introduction to Linux and C++, leap.cpp, Lab 1C.

This program asks the user to enter a year and calculates
the given year if it is a leap year or common year and
returns the type of year.
*/

#include <iostream>

int main() 
{
   // Variable
   int year;
   std::cout << "Enter year: " << std::endl;
   std::cin >> year;
   if(year%4 != 0) 
   {
      std::cout << "Common year" << std::endl;
   }
   else if(year%100 != 0)
   {
      std::cout << "Leap year" << std::endl;
   }
   else if(year%400 != 0)
   {
      std::cout << "Common year" << std::endl;
   }
   else 
   {
      std::cout << "Leap year" << std::endl;
   }
   return 0;
}
