#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int b;
	int *ptr;

	b = 91;
	ptr = &b;
    my_putchar(b);
	*ptr = 93;
	my_putchar(b);
	printf("\n");
}