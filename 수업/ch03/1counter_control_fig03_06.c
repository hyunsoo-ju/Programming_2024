/* Fig. 3.6: fig03_06.c
   Class average program with counter-controlled repetition */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* function main begins program execution */
int main(void)
{
	unsigned int counter; /* number of grades entered */
	int grade;			  /* grade value */
	int total;			  /* sum of grades */
	float average;

	/* number with decimal point for average */
	total = 0; /* initialize total */
	counter = 1;
	/* processing phase */
	/* get first grade from user */

	/* loop while sentinel value not yet read from user */
	while (grade != -1)
	{
		printf("Enter grade for student %d: ", counter); /* add grade to total */
		scanf("%d", &grade);
		total = total + grade;
		counter = counter + 1; /* increment counter */

	}									   /* end while */
	average = (total + 1) / (counter - 2); /* avoid truncation */

	printf("Class average is %.2f \n", average);

	return 0; /* indicate program ended successfully */
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
