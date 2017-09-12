#include ".\PrintBinary.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

//#ifndef PRINT_BINARY_H_
//#define PRINT_BINARY_H_
//int printBinary(void const * const ptr, unsigned int const size)
//int printBinary(void * ptr, size_t size)
int printBinary(void const * const ptr, size_t const size)
{
	int numberOfBitsPrinted = 0; // Return value... Incremented for each bit printed
	unsigned char *b = (unsigned char*)ptr;
	unsigned char byte;
	int i;
	int j;

	for (i = size - 1; i >= 0; i--)
	{
		for (j = 7; j >= 0; j--)
		{
			byte = b[i] & (1 << j);
			byte >>= j;
			printf("%u", byte);
			numberOfBitsPrinted++;
		}
	}

	return (numberOfBitsPrinted);
}
//#endif