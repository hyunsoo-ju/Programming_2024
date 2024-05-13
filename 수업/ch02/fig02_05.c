/* Fig. 2.5: fig02_05.c
   Addition program */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* function main begins program execution */
int main(void)
{
   // declare variables and initialize them by assigning values of 0
   int integer1 = 0; /* first number to be input by user  */
   int integer2 = 0; /* second number to be input by user */
   int sum = 0;      /* variable in which sum will be stored */

   printf("Enter first integer\n");
   scanf("%d", &integer1); /* read an integer % is conversion specifier, & is addres operator */
   // %d is access specifier for integer

   printf("Enter second integer\n");
   scanf("%d", &integer2); /* read an integer */
   sum = 0;
   // sum = ((integer1 + integer2) / (3 % (4 + 6))); /* assign total to sum */
   sum = integer1 + integer2;

   printf("sum is %p\n", &sum); /* print sum */

   return 0; /* indicate that program ended successfully */
} /* end function main */

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
