
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

#include <math.h>

void passbyref1(int &num)
{
	num *= num;
}
/*
int& danglingref()
{
	static int l = 2;
	return l;
}
*/
int main(int argc, char* argv[])
{
	int d = 2;
	//int &p = danglingref();
	passbyref1(d);
	//std::cout << d << std::endl;
}
