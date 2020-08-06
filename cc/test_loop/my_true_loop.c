

#include <stdio.h>

/*void my_true_loop( int n)
{
	int i;

    for (i = 0; i < n; i++)
    {
    	printf("+");
    }
    printf("\n");
}

int main()
{
	my_true_loop(6);
	return (0);
}*/


void my_true_loop(int n)
{
	int i = 0;

	while(i < n)
	{
		printf("+");
		i++;
	}
	printf("\n");
}

int main()
{
	my_true_loop(6);
	return 0;
}
