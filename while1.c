//Colatz Conjuncture while loop in C
#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Input a digit: \n");
    scanf("%d", &num);

    while(num % 2 == 0 || num % 2 == 1){
     if(num % 2 == 0){
        printf("The number is %d!\n", num);
        printf("%d is Even!\n\n",num);
        num = num/2;
    }else{
        printf("The number is %d!\n", num);
        printf("%d is Odd!\n\n", num);
        num = 3*num+1;
    }}return 0;
}
