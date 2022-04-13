#include <stdio.h>

#define  LOWER  0       // lower limit of table
#define  UPPER  300     // upper limit
#define  STEP   20      // step size

float fahr2cels(int fahr);

/* 1.7 Functions
 * Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to
 * use a function for conversion */
int main(void) {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d\t%6.1f\n", fahr, fahr2cels(fahr));
    return 0;
}

float fahr2cels(int fahr) {
    return (5.0/9.0)*(fahr-32);
}
