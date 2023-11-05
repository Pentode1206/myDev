/* This is an example program from: 
 * https://www.educative.io/courses/learn-c-from-scratch/constants
 * It demonstrates the use of numeric constants in printf() statements.
 * %d renders a value in decimal.
 * %o renders a value in octal.
 * %x renders a value in hexidecimal.
 * A decimal constant has no prefix, eg. 1984
 * An octal constant is prefixed with 0, eg. 0123.
 * A hexidecimal constant is prefixed with 0x, eg. 0x12f.
 * Notice that in the fourth and fifth printf() statements, %d causes the
 * value of the constant to be rendered in decimal.
 * 27OCT23
 * */

#include <stdio.h>

int main() 
{
  printf("1984 in decimal is %d\n", 1984);
  printf("1984 in octal is 0%o\n", 1984);
  printf("1984 in hexadecimal is 0x%x\n", 1984);
  printf("0123 is octal for %d\n", 0123);
  printf("0x12f is hexadecimal for %d\n", 0x12f);
  return 0;
}
