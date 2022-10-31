#include<stdio.h>
#include<stdlib.h>

int main(){
    //declare variables
    float num1, num2, result;
    char oper,clear, ans = 'Y';

    while(ans == 'Y' || ans == 'y'){
    printf("=====================\n");
    printf("| BASIC  CALCULATOR |\n");
    printf("=====================\n\n");

    //asking user to input an equation
    printf("Input an equation: \n");
    scanf("%f %c %f", &num1, &oper, &num2);

    switch(oper){
    case '+':
        //adds the two integers if operator is +
        result = num1 + num2;
        printf("Answer is %.1f\n\n", result);
        break;
    case '-':
        //subtracts the two integers if operator is -
        result = num1 - num2;
        printf("Answer is %.1f\n\n", result);
        break;
    case '*':
        //multiplies the two integers if operator is *
        result = num1 * num2;
        printf("Answer is %.1f\n\n", result);
        break;
    case '/':
        //divides the two integers if operator is /
        result = num1 / num2;
        printf("Answer is %.1f\n\n", result);
        break;
    default:
        //proceeds if the inputted operator is invalid
        printf("Invalid Input! %c\n\n", oper);
        return 1;//break is not necessary when there is return statement
    }
    while((clear = getchar()) != '\n' && clear != EOF);//clear input buffer

    //asking user to make another calculations
    printf("Do you want to make another calculations? Y/N\n");
    scanf("%c", &ans);
    printf("\n\n");
    }

return 0;//exit the program
}
