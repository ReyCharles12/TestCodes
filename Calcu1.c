#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    float num1, num2;
    char oprtr, choice;

        printf("===================\n");
        printf("C A L C U L A T O R\n");
        printf("===================\n\n");

        do
        {
        printf("[O]     [X]");
        printf("\n");
        scanf("%c", &choice);

        system("cls");

        printf("===================\n");
        printf("C A L C U L A T O R\n");
        printf("===================\n");

        switch(choice){
        case 'o':
        printf("\n");
        scanf("%f", &num1);

        printf("\n");
        scanf(" %c", &oprtr);

        while(oprtr != '='){
        if(oprtr == '+' || oprtr == '-' || oprtr == '*' || oprtr == '/'){
            printf("\n");
            scanf(" %f", &num2);
            switch(oprtr)
            {
            case '+':
                num1 = num1 + num2;
                printf("\n");
                scanf(" %c", &oprtr);
                break;
            case '-':
                num1 = num1 - num2;
                printf("\n");
                scanf(" %c", &oprtr);
                break;
            case '*':
                num1 = num1 * num2;
                printf("\n");
                scanf(" %c", &oprtr);
                break;
            case '/':
                num1 = num1 / num2;
                printf("\n");
                scanf(" %c", &oprtr);
                break;
            }
        }

    }
    system("cls");
    printf("===================\n");
    printf("C A L C U L A T O R\n");
    printf("===================\n\n");

    printf("%.2f\n", num1);
    getch();
    break;
        case 'x':
         exit(0);
}}while(choice != 2);
}
