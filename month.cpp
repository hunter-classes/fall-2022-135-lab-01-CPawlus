/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Introduction to Linux and C++, month.cpp, Lab 1D.

This program asks the user to enter a year and month
and calculates the amount of days in the given month 
and of the given year.
*/

#include <iostream>

int main() 
{
   // Variables
   int year, month;
   bool leap;
   // Input
   std::cout << "Enter year: ";
   std::cin >> year;
   std::cout << "Enter month: ";
   std::cin >> month;
   // Conditionals
   if(year%4 != 0) 
   {
      leap = false;
   }
   else if(year%100 != 0)
   {
      leap = true;
   }
   else if(year%400 != 0)
   {
      leap = false;
   }
   else 
   {
      leap = true;
   }
   // Secondary Conditionals
   if(month < 8)
   {
      if(month == 2)
      {
         if(leap) 
         {
            std::cout << "\n29 days" << std::endl;
         }
         else 
         {
            std::cout << "\n28 days" << std::endl;
         }
      }
      else if(month%2 != 0) 
      {
         std::cout << "\n31 days" << std::endl;
      }
      else 
      {
         std::cout << "\n30 days" << std::endl;
      }
   }
   else 
   {
      if(month%2 != 0) 
      {
         std::cout << "\n30 days" << std::endl;
      }
      else 
      {
         std::cout << "\n31 days" << std::endl;
      } 
   }
   return 0;
}