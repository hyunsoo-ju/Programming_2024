#include <stdio.h> 

int main( void ) 
{
	printf("hello world\n");
	int i = 0;
	float f = 4.5;
	int l[] = { 1,2,3 };
	printf("%d , %d , %u\n", i, f, &i);

	int* p = l; 
	
	printf("%d\n", *p);
	return 0;  
} 