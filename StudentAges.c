/******************************************
*Programmer(s) : Andrew A Neumann
*Last Modified:
*Program Name:
*Program Desc:
******************************************/
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{    


    srand(time(NULL));   // should only be called once
    int r = rand(); 

    int intStudents = 7;
    int arrStudentsAges [intStudents + 1];
    arrStudentsAges[0] = 32;

    for(int x = 1 ; x < intStudents; x++)
        {

        r = rand();

        while(r>100)
        {
            r /= 10;
        }

        arrStudentsAges[x] = r;
        }
    for(int x = 0 ; x < intStudents; x++)
        {
        printf("student %d age is %d\n",x, arrStudentsAges[x]) ;
        }
    char str [] = "aa";
    str[2] ='a';
char arrQuote [] = "When you burn enough bridges, the only way is to move forward.";

if(arrQuote[strlen(arrQuote)] == '\0')
{ 
    printf("yes");
}

int x = 0;
while (arrQuote[x] != '\0')
{
    printf("%c \n",arrQuote[x]);
    x++;
}

x = 0;
while (str[x] != '\0')
{
    printf("%c \n",str[x]);
    x++;
}

return 0;
}