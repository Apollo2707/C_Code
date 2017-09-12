#include "stdio.h"
int main()
{
int g = getc(stdin);
putchar(++g);
printf("\n");
}