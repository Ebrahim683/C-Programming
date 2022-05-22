#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d",&a);

    for(int i = 1;i<=10;i++){
            int c = a*i;
        printf("%d x %d = %d\n",a,i,c);
    }

    return 0;
}
