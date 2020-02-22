#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Functions.h"

int main()
{
    int Matrix_to_pla[10][10];
    int dim = 10;
    Load_Matrix_0(Matrix_to_pla,dim);
    Display_Matrix_2_dimensions(Matrix_to_pla, dim);
    Load_matrix_play(Matrix_to_pla, dim);
    Display_Matrix_2_dimensions(Matrix_to_pla, dim);
    Load_matrix_play_2(Matrix_to_pla, dim);
    Display_Matrix_2_dimensions(Matrix_to_pla, dim);
    Load_matrix_play_3(Matrix_to_pla, dim);
    Display_Matrix_2_dimensions(Matrix_to_pla, dim);
    Load_Matrix_0(Matrix_to_pla,dim);
    Load_matrix_play_4(Matrix_to_pla, dim);
    Display_Matrix_2_dimensions(Matrix_to_pla, dim);
    
    
    /*
    srand(time(0));
    int dimensione=10;
    int matrix_1[dimensione];
    int sum;
    int matrix[dimensione][dimensione];
    int matrix_2[dimensione][dimensione];
    int somma_riga[10];
    int somma_colonna[10];
    load_array(matrix_1,dimensione);
    Display_array(matrix_1, dimensione);
    printf("Caricamento Random da 0 a 50 : 'Matrice 1' \n");
    Load_Matrix_2_dimensions_Random(matrix,dimensione);
    sum = Sum_Matrix_2_dimensions(matrix,dimensione);
    printf("\n La somma totale della matrix e : %d \n", sum);
    printf("Modificato della matrice!\n");
    printf("Se e pari +1 , Se e dispari -1 \n");
    even_increase_noteven_decrease(matrix,dimensione);
    printf("Matrice 1 Display ---> \n");
    Display_Matrix_2_dimensions(matrix,dimensione);
    copy_Matrix_2_dimensions(matrix,dimensione,matrix_2);
    printf("\nCoppia matrice al incontrario :\n");
    Display_Matrix_2_dimensions(matrix_2,dimensione);
    sum_matrix_2_dimensions_columns(matrix,dimensione,somma_riga);
    sum_matrix_2_dimensions_lines(matrix,dimensione,somma_colonna);
    printf("\n");
    int f;
    for(f=0;f<dimensione;f++)
        printf("Riga : %2d | Totale : %4d \n", f+1,somma_riga[f]);
    printf("\n");
    for(f=0;f<dimensione;f++)
        printf("Colonna : %2d | Totale : %4d \n", f+1,somma_colonna[f]);
    */
}
