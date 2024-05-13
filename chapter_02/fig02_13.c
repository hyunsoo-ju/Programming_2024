/* Fig. 2.13: fig02_13.c
   Using if statements, relational 
   operators, and equality operators */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* function main begins program execution */
int add(int x, int y)
{
	return x + y;
}

int main13( void )
{
   int num1 = 2; /* first number to be read from user  */
   int num2 = 3; /* second number to be read from user */
   
   int num3 = 4 ;

   int num4 = num1 * num2 <= num3 <= num1;  // right to left // 0 

   printf("num4 %d", num4);


   return 0; /* indicate that program ended successfully */
} /* end function main */

// single line comment

/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
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
 *************************************************************************/

