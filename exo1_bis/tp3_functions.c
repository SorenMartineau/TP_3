#include <stdio.h>
#include "tp3_header.h"


void initImg(char img[100][100], int width, int max_height){
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img[i][j] = ' ';
        }
    }
    
}
