#include <stdio.h>
#include "tp3_header.h"

void afficherMenu(){
    // affiche le menu

    printf("========== GESTION DES NOTES ==========\n");
    printf("1. Saisir le nombres d'eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n"); 
    printf("4. Afficher la moyenne d'un eleve\n");    
    printf("5. Afficher la moyenne generale\n");     
    printf("4. Afficher la meilleur note d'un controle\n");
    printf("0. Quitter\n");     
}

int lireChoix(){
    // lis le choix de l'utilisateur dans le menu

    int choix;
    scanf("%d",&choix);
    return choix;
}

int saisirNombreEleves(){
    // lis le nombres d'eleves choisit par l'utilisateur

    while (1){
        int num;
        printf("entrez le nombres d'eleves (1 a 30): ");
        scanf("%d", &num);
        if (1 <= num && num <= 30){
            return num;
        }
        printf("valeur invalide\n");
    }
    

}