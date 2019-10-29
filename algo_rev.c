/*
** 
** 
** File description: Rubiks square algo
** 
*/

#include "rubiks.h"
#include "algo.c"
#define PRINT_SQUARE_DEBUG_0

void algo_square_reverse(int **table, int square)
{
    // if(PRINT_SQUARE_DEBUG_== 1)
    int row;
    int col;
    int count = table[0][1];
    int count1 = table[1][0];
    int count2 = table[0][0];
    int count3 = table[1][1];

    table[1][1] = count1;
    table[1][0] = count2;
    table[0][1] = count3;
    table[0][0] = count;
    printf("Rotate Clockwise square %d.\n");
    print_tab(table);
}

void algo_column_reverse(int **table, int col)
{
    int row = 0;
    int count = table[row][col];

    for(row = 3; row > 0; row--)
    {
        table[row][col] = table[row-1][col];
    }
        table[row][col] = count;
        printf("Rotate down column %d.\n");
        print_tab(table);
    
}

void algo_line_reverse(int **table, int line)
{
    int col = 0, row = line;
    int count = table[row][col];

    for(row = 3; col > 0; col--)
    {
        table[row][col] = table[row][col-1];
    }

    table[row][col] = count;
    printf("Rotate right line %d.\n");
    print_tab(table);
}



int main()
{
    int **table;
    
    table = create_table(table);
    fill_table(table);
    // algo_line(table,0);
    // algo_column(table,0);
    //   algo_square(table,0);
    algo_square_reverse(table,0);
    algo_column_reverse(table,0);
    algo_line_reverse(table,0);
    
}
