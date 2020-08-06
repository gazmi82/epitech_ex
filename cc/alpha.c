/*

Test file for c syntax

*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c) 
{
	write(1, &c, 1);
}

void my_aff_alpha()
{
	int lettre = 0;

	for (lettre = 97; lettre <= 122; lettre++) {
		my_putchar(lettre);
	}
	printf("\n");
}

int main()
{
	my_aff_alpha();
	return 0;
}