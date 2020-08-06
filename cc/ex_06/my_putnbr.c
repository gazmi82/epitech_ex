#include <stdio.h>
#include <unistd.h>


void my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putnbr(int nb)
{
	unsigned int nbr, exp = nb * -1;

	if (nb < 0)
	{
		my_putchar('-');
		nbr = exp;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		
		my_putnbr(nbr / 10);
	my_putchar(nbr % 10 + 48);
}

int main()
{
	my_putnbr(42);
	my_putnbr(-42);
	return 0;
}