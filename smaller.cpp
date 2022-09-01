/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Introduction to Linux and C++, smaller.cpp, Lab 1A

This program asks the user for two numbers and calculates 
which number is the smallest and returns that number.
*/

#include <iostream>

int main() 
{
   // Variables
   int firstN, secN;
   // Input
   std::cout << "Enter the first number: ";
   std::cin >> firstN;
   std::cout << "Enter the second number: ";
   std::cin >> secN;
   // Conditionals
   if(firstN < secN)
   {
      std::cout << "\nThe smaller of the two is " << firstN << std::endl;
   }
   else 
   {
      std::cout << "\nThe smaller of the two is " << secN << std::endl;
   }
   return 0;
}