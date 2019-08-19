#include <stdio.h>
#include <stdarg.h>
// g++ -g -std=c++11 -Wall -pedantic
// fmt should be a const double quite string 
#define DERR(fmt, ...) fprintf(stderr, "\t+[%s]:" fmt "\n", __func__, __VA_ARGS__);

int main(int argc, char **argv)
{
	int len = 99;
	int len2 = 6666;

	DERR("test data %d .. %d\n", len, len2); 
	return 0;
}

