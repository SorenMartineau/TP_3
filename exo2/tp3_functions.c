#include <stdio.h>
#include "tp3_header.h"

void afficherMenu(){
    // affiche le menu

    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1. Faire un retrait\n");
    printf("2. Quitter\n");

}

int saisirMontant(){

    int montant;
    scanf("%d",&montant);
    return montant;    

}
 


