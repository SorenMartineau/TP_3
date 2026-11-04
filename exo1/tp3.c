#include <stdio.h>
#include "tp3_header.h"

int main()
{

    int tab_notes[100][100];
    int nombre_eleves; 
    int stop = 0;
    int indice_eleves;
    float moyenne;

    while (stop == 0){

        afficherMenu();
        int choix = lireChoix();

        switch (choix)
        {

        case 1:
            nombre_eleves = saisirNombreEleves();
            break;

        case 2:
            saisirNotes(tab_notes, nombre_eleves);
            break;

        case 3:
            afficherNotes(tab_notes, nombre_eleves);
            break;

        case 4:
            printf("choisir l'eleve (1 a %d): ", nombre_eleves);
            scanf("%d", &indice_eleves);
            moyenne = calculerMoyenneEleve(indice_eleves, tab_notes);
            printf("ca moyenne est de %f\n", moyenne);
            break;
        
        case 5:
            moyenne = calculerMoyenneGenerale(nombre_eleves, tab_notes);
            printf("la moyenne generale est de %f\n", moyenne);
            break;
        
        case 6:
            afficherMeilleuresNotes(nombre_eleves, tab_notes);
            break;
        
        case 0:
            stop = 1;
            break;
        
        default:
            break;
        }

    }
    return 0;
}