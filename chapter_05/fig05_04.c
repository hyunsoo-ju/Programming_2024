#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fun1( int x, int y, int z ); 
int fun2( int x);
int main( void )
{
	int a;
	scanf("%d", &a);
	int array[a];
   printf( "% d\n", fun1( 1,2,3 ) );
   return 0; 
} 
int fun1( int x, int y, int z )
{
   return fun2(x); 
}
int fun2(int x)
{
	return x;
}




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

