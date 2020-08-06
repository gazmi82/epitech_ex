/*
Write a function that displays all the different combinations of n digits in the ascending order like in the
example
01, 02, 03, 04, 05, ...., 79, 89
*/
#include <stdio.h>

int my_aff_comb_n(int n)
{
    int digit, exp = n;

    for (int digit = 0; digit < 9; digit++)
    { 
    	for (int exp = 0; exp < digit; exp++)
    	{
    		if (digit != exp) {
    		printf("%d%d, ", digit, exp);
    	   }
    	}
    }
}

int main()
{
    my_aff_comb_n(2);
    return 0;
} 