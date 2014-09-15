#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius = 0, 10, ..., 100;
 * floating-point arithmetic */

int main() {

  float celsius, fahrenheit;
  int lower, upper, step;

  lower = 0;   // lower limit of temp table
  upper = 100; // upper limit
  step = 10;   // step size

  celsius = lower;

  printf("%s\t\t%s\n", "Celsius", "Fahrenheit");

  while(celsius <= upper) {
    fahrenheit = (celsius * (9.0/5.0) + 32);
    printf("%3.0f\t%14.1f\n", celsius, fahrenheit);

    celsius = celsius + step;
  }
}
