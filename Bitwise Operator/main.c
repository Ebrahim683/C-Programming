#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a =1;
    b =0;
    //Bitwise works with bitecode
    printf("a & b = %d\n",a&b);//booth value is true
    printf("a | b = %d\n",a|b);//minimum one value is true
    printf("a ^ b = %d",a^b);//one value is true and one value is false

    return 0;
}
