#include <stdio.h>
#include <stdlib.h>

int main() {
    int level, totHealth, total;
    char c='c';
    while (1) {
        do {
            switch (c) {
            case 'c':
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
                printf("Type c to calculate, type e to exit\n");
                while(getchar()!='\n');
                scanf("%c", &c);
                system("@cls");
                break;
            case 'e':
                exit(1);
                break;
            }

        } while (c != 'e' && c != 'c');
    }
}


