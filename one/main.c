#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float sum,avg,multi,mod,dev,mines;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter first number: ");
    scanf("%d",&b);

    sum = a+b;
    mines = a-b;
    multi = a*b;
    dev = a/b;
    mod = a%b;
    avg = (a+b)/2;

    printf("Sum is: %.1f",sum);
    printf("\n");
    printf("Mines is: %.1f",mines);
    printf("\n");
    printf("Multiplication is: %.1f",multi);
    printf("\n");
    printf("Devision is: %.1f",dev);
    printf("\n");
    printf("Avg is: %.1f",avg);
    printf("\n");
    printf("MOd is: %.1f",mod);
    printf("\n");

    return 0;
}
