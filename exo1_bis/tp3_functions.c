#include <stdio.h>
#include "tp3_header.h"


void initImg(char img[100][100], int max_height, int width){
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img[i][j] = ' ';
        }
    }
    
}


void affichage(char img[100][100], int max_height, int width){
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c ", img[i][j]);
        }
        printf("\n");
    }
    
}


void creationPointe(char img[100][100], int n, int width){
    int mid = width / 2;

    for (int j = 0; j < width; j++)
    {
        img[n-1][j] = '_';
    }

    for (int i = 0; i < n; i++)
    {
        img[i][mid-i] = 'A';

        for (int j = -i+1; j < i; j++)
        {
            img[i][mid+j] = 'S';
        }

        img[i][mid+i] = 'A';
    }

    
    
    
}