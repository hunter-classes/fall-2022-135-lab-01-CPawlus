/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Introduction to Linux and C++, smaller3.cpp, Lab 1B.

This program asks the user for three numbers and calculates 
which number is the smallest by comparing one of the number to the others
and returns the smallest number.
*/

#include <iostream>

int main() 
{
   // Variables
   int firstN, secN, thirdN;
   // Input
   std::cout << "Enter the first number: " << std::endl;
   std::cin >> firstN;
   std::cout << "Enter the second number: " << std::endl;
   std::cin >> secN;
   std::cout << "Enter the third number: " << std::endl;
   std::cin >> thirdN;
   // Conditionals
   if(firstN < secN)
   {
      if(firstN < thirdN)
      {
         std::cout << "\nThe smaller of the three is " << firstN << std::endl;
      }
      else
      {
         std::cout << "\nThe smaller of the three is " << thirdN << std::endl;
      }
   }
   else if(secN < firstN) 
   {
      if(secN < thirdN) 
      {
         std::cout << "\nThe smaller of the three is " << secN << std::endl;
      }
      else
      {
         std::cout << "\nThe smaller of the three is " << thirdN << std::endl;
      }
   }
   return 0;
}