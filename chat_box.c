#include<stdio.h>
#include<stdlib.h>

int main(){
    char first_p[100], sec_p[100], msg[5000], choice, choice1, clear;

    do{
    printf("===========================\n");
    printf("|M E S S A G I N G   B O X|\n");
    printf("===========================\n");

    printf("\nWhat's your name?\n");
    scanf("%[^\n]s", &first_p);

    while((clear = getchar()) != '\n' && clear != EOF);//clear input buffer
    printf("\nWhat's your friend's name?\n");
    scanf("%[^\n]s", &sec_p);

    while((clear = getchar()) != '\n' && clear != EOF);//clear input buffer
    printf("\nDo you want to say something to your friend? Y/N \n");
    scanf("%s", &choice);

    while((clear = getchar()) != '\n' && clear != EOF);//clear input buffer
    if(choice == 'Y' || choice == 'y'){
        printf("\nWhat do you want to say?\n");
        scanf("%[^\n]s", &msg);
    }else if(choice == 'N' || choice == 'n'){
    printf("\nIt's okay, just remember that we will always be here!\n");
    }else{
        printf("Invalid Keyword!");
        return 1;
    }
    while((clear = getchar()) != '\n' && clear != EOF);//clear input buffer
    if(choice == 'Y' || choice == 'y'){
    printf("\nFrom: %s\n", first_p);
    printf("To: %s\n", sec_p);
    printf("Message: %s\n\n", msg );
    printf("Do you want to make another message? Y/N \n");
    scanf("%s", &choice1);
    }
}while(choice1 == 'Y' || choice1 == 'y');

    printf("\n\n");
    system("pause");
    return 0;
}
