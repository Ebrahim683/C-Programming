#include <stdio.h>
#include <stdlib.h>

int main(){
    int input1,input2;
    printf("Enter first number: ");
    scanf("%d",&input1);

    printf("Enter second number: ");
    scanf("%d",&input2);

    maxNumebr(input1,input2);
    minNumebr(input1,input2);

    return 0;
}


void maxNumebr(int a,int b){
    int max;
 if(a>b){
    max = a;
 }else{
 max = b;
 }
 printf("Max number is: %d\n",max);
}


void minNumebr(int a,int b){
    int min;
if(a<b){
min = a;
}else{
min = b;
}
 printf("Min number is: %d\n",min);
}
