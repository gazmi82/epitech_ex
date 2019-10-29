/*
** EPITECH PROJECT, 2019
** 
** 
** 
*/


#include "rubiks.h"
#include "ruler.c"


void algo_line(int **table, int line)
{
    int col=0, row=line;
    int count = table[col][row];

    for(col= 0; col<3; col++)
        	if(PRINT_SQUARE_DEBUG__ == 1)

    {
        table[row][col] = table[row][col+1];
    }
    table[row][col] = count;
    printf("Rotate Left line %d.\n", row);
    print_tab(table);
}

void algo_column(int **table, int col)

{
    int row = 0;
    int count = table[col][row];

    for(row=0; row<3; row++)
        	if(PRINT_SQUARE_DEBUG__ == 1)

    {
        table[row][col] = table[row+1][col];
    }
    table[row][col] = count;
    printf("Rotate Top column %d.\n", col);
    print_tab(table);
}

void algo_square(int **table, int square)
{
    int row;
    int col;
    int count = table[0][0];
    int count1 = table[1][1];
    int count2 = table[1][0];
    int count3 = table[0][1];

    table[1][0] = count1;
    table[0][0] = count2;
    table[1][1] = count3;
    table[1][1] = count;

    printf("Rotate Clockwise square %d.\n", square);
    print_tab(table);
}


