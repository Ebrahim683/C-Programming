#include <stdio.h>

int main()
{

    /*char name[100];
    int age;

    printf("Enter Name: ");
    scanf("%s",&name);

    printf("Enter Age: ");
    scanf("%d",&age);

    printf("Name: %s \n",name);
    if(age<18){
        printf("You are not adult. Your age is: %d",age);
    }else if(age>50){
         printf("You are adult. Your age is: %d",age);
    }else{
         printf("You are old. Your age is: %d",age);
    }*/

    int a;
    printf("Enter Number: ");
    scanf("%d",&a);

    if(a%2 == 0){
        printf("This number is even");
    }else{
     printf("THis number is odd");
    }

    return 0;
}
