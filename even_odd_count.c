#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int a, num2, even, odd;

    printf("Input two digit number: ");
    scanf("%d", &num2);

    printf("Odd   Even\n");
    if(num2 >= 10 && num2 <= 99){
    for(a = 1; a <= num2; a++)
        if(a % 2 == 1){
            odd = a;
        }else if(a % 2 == 0){
            even = a;
            if(a <= 9){
            printf("%d     %d\n", odd, even);
        }else if(a == 9 || a == 10){
            printf("%d     %d\n", odd, even);
        }else if(a >=10){
            printf("%d    %d\n", odd, even);
        }
        }
    }else{
        printf("Invalid Input!\n");
    }
    getch();
}
