/*
Write a function that displays all the different combinations of two numbers between 0 and 99, in as-
cending order
00 01, 00 02, 00 03, 00 04, 00 05, ...., 01 99, 02 03, ...., 98 99
*/

#include <stdio.h>

int my_aff_comb2()
{
    int i, j, k, l;

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 9; j++)
        {
            for ( k = 0; k < 10; k++)
            {
                for ( l = 0; l <= 9; l++)
                {
                    if(i != j != k != l)
                    printf("%d%d %d%d, ", i, j, k, l);
                }
                
            }
            
        }
        
    }
    
}    
int main()
{
    my_aff_comb2();
    return 0;
}