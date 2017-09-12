#include <stdio.h>
int main() {
  printf("Prime Number Generator\nHow many prime numbers do you want?: ");
  int intNumberOfPrimesGenerated;
  int intNumber = 1;

  scanf("%d", &intNumberOfPrimesGenerated);


  do { // start of do

    int checked = 0;
    for (int i = intNumber / 3; i > 1; i--) { // start of for
      if (intNumber % i == 0) {
        checked ++;
      }
      else if(intNumber == 1 || intNumber == 0)
      {
          checked ++;
      }
    }
      if (!checked) {
        printf("%d\n", intNumber);
        intNumberOfPrimesGenerated--;
      }
      intNumber ++;
    // end of for
  } while (intNumberOfPrimesGenerated); // end of do
}