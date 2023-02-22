/*Write a C Program to  swap two numbers without using 3rd variable */
#include <stdio.h>
void main() {

  int a,b;
  printf("Enter values for a & b: ");
  scanf("%d &d, &a,&b");

  a = a+b;
  b = a-b;


  printf("\nThe value of a and b after swapping!!");

  printf("\na =%d",a);
  printf("\nb =%d",b);
    return 0;
}
