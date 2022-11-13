#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    int i;

    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday! Happy Birthday!\n");
    printf("Happy Birthday to you!\n");

    for(i = 0; i < 2; i++){
        Beep(261.6, 250); //C4
    Beep(261.6, 250); //C4
    Beep(293, 500); //D4
    Beep(261.6, 500); //C4
    Beep(349.2, 500); //F4
    Beep(329, 1200); //E4

    Beep(261.6, 250); //C4
    Beep(261.6, 250); //C4
    Beep(293, 500); //D4
    Beep(261.6, 500); //C4
    Beep(391.9, 500); //G4
    Beep(349.2, 1200); //F4

    Beep(261.6, 250); //C4
    Beep(261.6, 250); //C4
    Beep(523.2, 500); //C5
    Beep(440, 500); //A4
    Beep(349.2, 250); //F4
    Beep(349.2, 250); //F4
    Beep(329, 500); //E4
    Beep(293, 1200); //D4

    Beep(466.2, 250); //Bb4
    Beep(466.2, 250); //Bb4
    Beep(440, 500); //A4
    Beep(349.2, 500); //F4
    Beep(391.9, 500); //G4
    Beep(349.2, 1000); //F4
    }
    system("pause");

    return 0;
}
