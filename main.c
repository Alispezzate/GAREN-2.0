#include <stdio.h>

int main(){
    int Level, TotHealth;
    int total;
    printf("What's your ultimate level?\n");
    scanf("%d", &Level);
    printf("What's your target total health?\n");
    scanf("%d", &TotHealth);

    switch (Level)
    {
    case 1:
        total=((TotHealth + 750) / 6);
        printf("The optimal ultimate damage is %d", total);
        break;
    case 2:
        total=((TotHealth + 1200) / 5);
        printf("The optimal ultimate damage is %d", total);
        break;
    case 3:
        total=((TotHealth + 1500) * 3 / 13);
        printf("The optimal ultimate damage is %d", total);
        break;
    default:
        printf("Ultimate level not valid");
        break;
    }
}