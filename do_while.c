//Colatz Conjucture do while loop in C
#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;

    printf("Please input your number: \n");
    scanf("%d", &num);

    do{
        if(num % 2 == 0){
            printf("Even!\n");
            printf("Answer is %d\n\n", num);
            num = num/2;
        }else{
        printf("Odd!\n");
        printf("Answer is %d\n\n", num);
        num = 3*num+1;
        }
    }while(num % 2 == 0 || num % 2 == 1);
    return 0;
}
