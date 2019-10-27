/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}


int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_revstr(char *str)
{
    int l, i;
    char *begin_ptr, *end_ptr, ch;

    l = my_strlen(str); 

    begin_ptr = str;
    end_ptr = str;

    for(i = 0; i < l - 1; i++) {
        end_ptr++;
    }

    for (i = 0; i < l / 2; i++) {
    ch = *end_ptr;
    *end_ptr = *begin_ptr;
    *begin_ptr = ch;

    begin_ptr++;
    end_ptr--;
    }
    return str;
}


    
    
