/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include<stdio.h>

int array_sum(int *tab, int size )
{
    int sum = 0;
    int i;
          
    for(i = 0; i < size; i++)
        sum = sum + tab[i];        
    
    return sum;
}

