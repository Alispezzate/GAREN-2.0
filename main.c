#include <stdio.h>

int main(){
    int livello, salutetot;
    double totale;
    printf("Qual è il livello della ultimate?\n");
    scanf("%d", &livello);
    printf("Qual è la salute totale del tuo avversario?\n");
    scanf("%d", &salutetot);

    switch (livello)
    {
    case 1:
        totale=((salutetot + 750) / 6);
        printf("Il danno ottimale della ultimate %.2f", totale);
        break;
    case 2:
        totale=((salutetot + 1200) / 5);
        printf("Il danno ottimale della ultimate %.2f", totale);
        break;
    case 3:
        totale=((salutetot + 1500) * 3 / 13);
        printf("Il danno ottimale della ultimate %.2f", totale);
        break;
    default:
        printf("Livello ultimate non valido");
        break;
    }
}