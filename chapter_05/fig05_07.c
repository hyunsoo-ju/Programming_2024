/* Fig. 5.7: fig05_07.c
   Shifted, scaled integers produced by 1 + rand() % 6 */
#include <stdio.h>
#include <stdlib.h>
int x=1;

void fun(int x)
{
    static int count = 1;
    printf("static variable count %d\n", count++);
    printf("%d\n", x);
}
/* function main begins program execution */
int main89879( void )
{

   int x = 5;

   {
       int x = 10;
       printf("%d \n", x);
   }
  
   printf("%d \n", x);

   fun(x);
   return 0; /* indicates successful termination */
} /* end main */



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

