#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        int level, totHealth;
        int total;

        do {
            printf("What's your ultimate level?\n");
            scanf("%d", &level);
            printf("What's your target total health?\n");
            scanf("%d", &totHealth);

            switch (level)
            {
            case 1:
                total = ((totHealth + 750) / 6);
                printf("The optimal ultimate damage is %d\n", total);
                break;
            case 2:
                total = ((totHealth + 1200) / 5);
                printf("The optimal ultimate damage is %d\n", total);
                break;
            case 3:
                total = ((totHealth + 1500) * 3 / 13);
                printf("The optimal ultimate damage is %d\n", total);
                break;
            default:
                printf("Ultimate level not valid\n");
                break;
            }
        } while (level < 1 || level > 3);
        printf("Press enter to calc with new datas\n");
        while (getchar() != '\n');
        while (getchar() != '\n');
        system("@cls");
    }
}