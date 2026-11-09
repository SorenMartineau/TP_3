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
            printf("%c", img[i][j]);
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


void creationCentre(char img[100][100], int n, int width){
    img[n][0] = '.';
    img[n][width-1] = '.';

    for (int j = 1; j < width-1; j++)
    {
        img[n][j] = 'S';
    }

    for (int i = 1; i < n-2; i++)
    {
        img[n+i][i*3] = '"';
        img[n+i][i*3+1] = 'V';

        for (int j = i*3+2; j < width-i*3-2; j++)
        {
            img[n+i][j] = 'S';
        }

        img[n+i][width-i*3-1] = '"';
        img[n+i][width-i*3-2] = 'V';
    
    }

}


void creationJambes(char img[100][100], int n, int width){
    int mid = width / 2;
    int debut_fin = (n-3)*3+1;


    for (int i = 0; i < n+1; i++)
    {
        img[2*n+i-2][debut_fin-i] = '.';
        img[2*n+i-2][width-debut_fin+i-1] = '.';
        img[2*n+i-2][mid-2*i+1] = '"';
        img[2*n+i-2][mid+2*i-1] = '"';


        for (int j = debut_fin-i+1; j < mid-2*i+1; j++)
        {
            img[2*n+i-2][j] = 'S';
        }

        for (int j = mid+2*i; j < width-debut_fin+i-1; j++)
        {
            img[2*n+i-2][j] = 'S';
        }

    }    
    
    

}
