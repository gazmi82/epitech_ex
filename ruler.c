/*
** EPITECH PROJECT, 2019
** 
** 
** 
*/
#include <stdio.h>
#include <stdlib.h>
#include "rubiks.h"

int **create_table(int **tab)
{
    // int **tab;

    int row_counter;
    tab = malloc(sizeof(int *) * 4);
    row_counter = 0;

    while(row_counter < 4){
        tab[row_counter] = malloc(sizeof(int ) * 4);
        row_counter++;
        }
    return tab;
}

void fill_table(int **tab){

  int row;
  int col;
  
  row = 0;
  while(row < 4){
    col = 0;
    while (col < 4){
        if(row < 2 && col < 2){
        tab[row][col] = 0;
        }
        if(row < 2 && col >= 2){
        tab[row][col] = 1;
        }
        if(row >= 2 && col < 2){
        tab[row][col] = 2;
        }
    if(row >= 2 && col >= 2){
        tab[row][col] = 3;
    }
    col++;
    }
  row++;
  }

}

void print_tab(int **table)
{
    int row;
    int col;

    row = 0;
    while (row < 4){
        col = 0;
        printf("-----------------\n");

        while (col < 4){
            printf("| %d ", table[row][col]);
                col++;
            }
            printf("|\n");
            row++;
        }
        printf("-----------------\n");
}

/*int main()
{
    int **tab;

    tab = create_table(tab);
    fill_table(tab);
    print_tab(tab);
}
*/
