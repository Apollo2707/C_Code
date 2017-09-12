#include <stdio.h>
 int main ()
 {
     int intDay;
     char arrMonth [4];
     int intYear;

     fscanf(stdin,"%4d-%3s-%4d",&intYear ,&arrMonth ,&intDay);
     fprintf(stdout, "%s %d, %d",arrMonth, intDay ,intYear);

    return 0;
 }