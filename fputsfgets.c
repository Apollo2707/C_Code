

#include <stdio.h>

int main()
{

char arrBuffer [10];

fgets(arrBuffer,sizeof(arrBuffer),stdin);

fputs(arrBuffer,stdout);


}