
/*1. Write a program to check whether a given number is positive or non-positive.*/

#include<stdio.h>

int main()
{
    int num;

    printf("Input a number :");
    scanf("%d", &num);
    if (num >= 0)
        printf("%d is a positive number \n", num);
    else
        printf("%d is a non-positive \n", num);
}
