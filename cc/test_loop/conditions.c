#include <stdio.h>

void conditions(int n)
{
	int number;
	number = n;

	if (number < 0)
	{
		printf("-");
	}
	else {

		if (number > 0)
	{
		printf("+");
	} 

	else
	printf("0\n");
}

} 


int main()
{
	conditions(-564);
	conditions(564);
	conditions(0);
	return 0;
}


