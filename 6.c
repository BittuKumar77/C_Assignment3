//Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>

int main ()
{
  int num1, num2;
  num1=12,num2=13;

  if (num1 == num2)
    printf("both are equal");
  else if (num1 > num2)
    printf("%d is greater", num1);
  else
    printf("%d is greater", num2);

  return 0;
}
