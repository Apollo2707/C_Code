#include <stdio.h>

void WriteBits(signed int);

int main()
{
    signed int intNumber = 42;
    signed int intLocation = 0;
    signed int intInputMask = 0x01;

    scanf("%d",&intLocation);
    intInputMask = intInputMask << intLocation ;
    printf("%d\n", intInputMask ^ intNumber);


    WriteBits(intNumber);
    WriteBits(intInputMask);
    WriteBits(intInputMask ^ intNumber);
    WriteBits(intInputMask & intNumber);


    return 0;
}

void WriteBits(signed int intsome)
{
    signed int intBitChecker = 0x01;
    intBitChecker = intBitChecker << (sizeof(signed int)*8)-1 ;
    for(int i = 0;i < sizeof(signed int)*8;++i)
    {
            //printf("Bitchecker- %u\n" , intBitChecker);
         printf("%u", (0 < (intBitChecker & intsome)));

        intBitChecker = intBitChecker >> 1;
    }   
    printf("\n");

}