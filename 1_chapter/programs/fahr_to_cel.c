// Version 2: Floating-Point Arithmetic
#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300; floating-point refactor */

int main() {

  float fahr, celsius; //in, all variables must be declared before use.  Declaration consists of a type name and a list of variables.
  int lower, upper, step; //type 'int' means that the variables are integers.


  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahr = lower;
  printf("%s\t%s\n","Fahrenheit", "Celsius");
  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f\t%15.1f\n", fahr, celsius);

    /*'%3.0f' means that a float(fahr) is to be printed at least 3 chars wide, with no decimal point. '%6.1f' will print a float at least 6 chars wide, with 1 digit after the decimal point. */

    fahr = fahr + step;
  }
}


// Version 1: Intger Arithmetic
/* #include <stdio.h> */
/*  */
/* #<{(| print fahreneheit-Celsius table */
/*  * for fahr = 0,20, ..., 300  |)}># */
/*  */
/* int main() */
/* { */
/*   int fahr, celsius; */
/*   int lower, upper, step; */
/*  */
/*   lower = 0;   // lower limit of temperature table */
/*   upper = 300; // upper limit */
/*   step = 20;   // step size */
/*  */
/*   fahr = lower; */
/*   printf("%3s\t%3s\n", "fahrenheit", "celsius"); */
/*  */
/*   while (fahr <= upper) { */
/*     celsius = 5 * (fahr-32) / 9; */
/*     printf("%3d\t%12d\n", fahr, celsius); */
/*     fahr = fahr + step; */
/*   } */
/* } */
