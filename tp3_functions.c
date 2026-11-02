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

int saisirNotes(int tab[100][100], int nombre_eleves){
    // place les notes des eleves donner par l'utilisateur dans un tableau 

    int note;

    for (int i = 0; i < nombre_eleves; i++){
        printf("Eleve %d\n", i+1);

        for (int j = 0; j < 3; j++){

            while (1){
                printf("  notes du controle %d (0 a 20): ", j+1);
                scanf("%d", &note);

                if (0 <= note && note <= 20){
                    tab[i][j] = note;
                    break;
                }
                printf("valeur invalide\n");
            }
    
        } 
    }
}

void afficherNotes(int tab_notes[100][100], int nombre_eleves){


    printf("Tableu des notes\n");
    printf("Eleve C1 C2 C3\n");
    for (int i = 0; i < nombre_eleves; i++){
        if (i < 10){
            printf("    %d", i+1);
        }
        else{
            printf("   %d", i+1);
        }

        for (int j = 0; j < 3; j++){
            if (tab_notes[i][j] < 10){
                printf("  %d", tab_notes[i][j]);
            }
            else{
                printf(" %d", tab_notes[i][j]);
            }
        }

        printf("\n");
    }

}

float calculerMoyenneEleve(int indice_eleves, int tab_notes[100][100]){

    float total = (tab_notes[indice_eleves-1][0] + tab_notes[indice_eleves-1][1] + tab_notes[indice_eleves][2]);
    return total / 3;

}

float calculerMoyenneGenerale(int nombre_eleves, int tab_notes[100][100]){
    float total = 0;
    for (int i = 1; i < nombre_eleves+1; i++){ 
        total += calculerMoyenneEleve(i, tab_notes);
    }
    return total / nombre_eleves;
}