#ifndef HEADER 
#define HEADER 

void afficherMenu();
int lireChoix();
int saisirNombreEleves();
int saisirNotes(int tab[100][100], int nombre_eleves);
void afficherNotes(int tab_notes[100][100], int nombre_eleves);
float calculerMoyenneEleve(int indice_eleves, int tab_notes[100][100]);

#endif