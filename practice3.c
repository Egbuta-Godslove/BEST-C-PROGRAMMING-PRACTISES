/* C Program to find Greatest Common Divisor of two integers  */
#include <stdio.h>

void main() {
int x, y,a,b,t,G;
  

  printf("\nEnter two integers: ");
  scanf("%d %d", &x, &y);

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  G = a;
  printf("The greatest common divisor for %d and %d is ", x, y);
  printf("%d",G);
  return(0);
}
