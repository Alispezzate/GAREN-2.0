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
                        if(totHealth<=150){
                            printf("The optimal ultimate damage is %d\n", totHealth);
                        }else{
                        total = ((totHealth + 600) / 5);
                        printf("The optimal ultimate damage is %d\n", total);
                        }
                        break;
                    case 2:
                        if(totHealth<=300){
                            printf("The optimal ultimate damage is %d\n", totHealth);
                        }else{
                        total = ((totHealth + 1000) * 3 / 13);
                        printf("The optimal ultimate damage is %d\n", total);
                        }
                        break;
                    case 3:
                        if(totHealth<=450){
                            printf("The optimal ultimate damage is %d\n", totHealth);
                        }else{
                        total = ((totHealth + 9000 / 7) * 7 / 27);
                        printf("The optimal ultimate damage is %d\n", total);
                        }
                        break;
                    default:
                        printf("Ultimate level not valid\n");
                        break;
                    }
                } while (level < 1 || level > 3);
                printf("Type c to calculate, type e to exit\n");
                while(getchar()!='\n');
                scanf("%c", &c);
                #ifdef windows
                system("@cls");
                #endif
                #ifdef unix
                system("clear");
                #endif
                break;
            case 'e':
                exit(1);
                break;
            }

        } while (c != 'e' && c != 'c');
    }
}


