#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, year;
    float gifts = 0, cash = 0;

    printf("How old is Anastasia?\n");
    scanf("%d", &year);

    for(i = 1; i <= year; i++){
        if(i % 2 == 1){
            gifts += 1;
        }else
        {
            cash += (i * 10) - 2;
        }
    }
    printf("\033[0;34m");
    printf("=========================================\n");
    printf("Anastasia received a total of %.0f gifts\n", gifts);
    printf("And a total of %.2f PHP of cash!\n", cash);
    printf("=========================================\n");
    printf("\033[0m\n");
    system("pause");
}
