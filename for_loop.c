//Colatz Conjucture for loop in C
#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Input your number\n");
    scanf("%d", &num);

    for("num = %d", num; num % 2 == 0 || num % 2 == 1;)
        if(num % 2 == 0){
            printf("Even!\n");
            printf("Answer is %d!\n\n", num);
            num = num/2;
        }else{
            printf("Odd!\n");
            printf("Answer is %d!\n\n", num);
            num = 3*num+1;
        }return 0;
}
