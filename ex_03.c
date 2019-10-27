/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include<stdio.h>

int my_strcmp(char*str1, char*str2)
{
   
    while ((*str1 != '\0' && *str2 !='\0') && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    if( *str1 == *str2) 
    {
        return 0;
    }
    else
    {
        return  *str1 - *str2;
    }
}
int main()
{
  printf("%s\n", my_strcmp("Gazmir", "Sulcaj"));
}
