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
 
int montantValide(int montant){

    if (5 <= montant && montant <= 1000 && montant % 5 == 0){
        return 1;
    }
    else{
        printf("erreur: montant invalide\n");
        printf("le montant doit etre entre 5 et 1000 euros et divisible par 5");
        return 0;
    }

}

