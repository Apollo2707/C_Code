#include <stdio.h>

int main()
{

unsigned short int intUserInput ;
unsigned short int intBitChecker = 0x01;

fscanf(stdin,"%u", &intUserInput);
intBitChecker = intBitChecker << (sizeof(unsigned short int)*8)-1 ;
printf ( "%u - %u\n",intUserInput , intBitChecker);

for(int i = 0;i < sizeof(unsigned short int)*8;++i)
{
    //printf("Bitchecker- %u\n" , intBitChecker);
    printf("%u", (0 < (intBitChecker & intUserInput)));

    intBitChecker = intBitChecker >> 1;
}
 return 0;
}