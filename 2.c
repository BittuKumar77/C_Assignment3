/*2. Write a program to check whether a given number is divisible by 5 or not*/

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%5==0)
        printf("Divisible by 5",a);
    else
        printf("Not Divisible by 5",a);

    return 0;
}
