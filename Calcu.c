#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1, num2, result;
    char oper;

    printf("\033[0;32m");
    printf("INSTRUCTIONS: Input two numbers first to operate, and one number only, at a time, in the last part!\n");
    printf("Put 0 after totaling(=) all inputted numbers: Ex. = 0\n");
    printf("\033[0m");

    printf("\n");
    scanf("%f", &num1);

    printf("\n");
    scanf(" %c", &oper);

    printf("\n");
    scanf(" %f", &num2);

    do{
    if(oper == '+'){
        num1 = num1 + num2;
        printf("%.2f\n", num1);
    }else if(oper == '-'){
        num1 = num1 - num2;
        printf("%.2f\n", num1);
    }else if(oper == '*'){
        num1 = num1 * num2;
        printf("%.2f\n", num1);
    }else if(oper == '/'){
        num1 = num1 / num2;
        printf("%.2f\n", num1);
    }else
    {
        printf("Invalid Input!\n");
        return 1;
    }
    printf("[+, -, *, /, =]\n");
    scanf(" %c", &oper);

    printf("\n");
    scanf(" %f", &num2);
    }while(oper != '=');
    printf("%.2f\n", num1);

}
