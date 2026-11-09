#include <stdio.h>
#include "tp3_header.h"

int main()
{
    int n;

    printf("choisisez la taille de l'etoile: ");
    scanf("%d",&n);

    int width = n * n;
    int max_height = 3 * n - 1;

    char img[100][100];

    return 0;
}