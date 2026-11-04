#include <stdio.h>
#include "tp3_header.h"

int main()
{
    int choix;
    int montant; 
    while (1){

        afficherMenu();
        printf("votre choix: ");
        scanf("%d", &choix);

        if (choix == 2){
            break;
        }
        
        if (choix == 1){        
            printf("votre montant: ");
            montant = saisirMontant();
            if (montantValide(montant) == 1){
                calculDistribution(montant);
            }
        }

    }

    return 0;
}