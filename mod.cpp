// Fig. 2.5: fig02_05.cpp
// Addition program that displays the sum of two integers.
#include <iostream> // allows program to perform input and output

// function main begins program execution
int main()
{
   // variable declarations
   int number1; // first integer to add
   

   std::cout << "Enter a integer: "; // prompt user for data
   std::cin >> number1; // read first integer from user into number1
   
   std::cout << (number1/1000)%10 << std::endl;
   
   std::cout << (number1/100)%10 << std::endl;
   
   std::cout << (number1/10)%10 << std::endl;
   
   std::cout << number1%10 << std::endl;
   
   //std::cout << "Sum is " << sum << std::endl; // display sum; end line
} // end function main



/**************************************************************************
 * (C) Copyright 1992-2011 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
