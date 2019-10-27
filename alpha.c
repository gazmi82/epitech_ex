/*
** EPITECH PROJECT, 2019
** first c program
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void alpha ()
{
    int i;

    for (i = 65; i = 91 ; i++)
    {
        my_putchar(i++);
    }

   printf("\n")
}
int main()
{
    alpha();
    return(0);

}


