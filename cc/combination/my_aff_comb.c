#include <stdio.h>

int my_aff_comb()
{
	int i, j, k;
	
    for (int i = 0; i <= 7; ++i)
    {
    	for (int j = 1; j <= 8; ++j)
    	{
    		for (int k = 2; k <= 9; ++k)
    		{
    			if (i != j && j != k && k != i)
    			{
    				printf("%d%d%d, ", i, j, k);
    			}
    		}
    	}
    }
    printf("\n"); 
}

int main()
{
	my_aff_comb();
	return 0;
}