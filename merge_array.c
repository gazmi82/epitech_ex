/*
** EPITECH PROJECT, 2019
** 
** 
** 
*/

#include <stdlib.h>
#include <stdio.h>

int *merge_array(int *arr1, int *arr2, int size1, int size2)
{
    int *arr = malloc(sizeof(int *) * (size1 + size2));
    int i = 0;
    int j;

        for(i = 0; i < (size1); i++)
        {
            arr[i] = arr1[i];
            printf("%d", arr1[i]);
        }
        j = 0;
        for(i = size1; i < (size1 + size2); i++)
        {
            arr[i] = arr2[j];
            j++;
            
            printf("%d", arr[i]);
        }
        printf("\n");
        return (0);
}
                
int main()
{
    int arr1[] = {1, 3, 4, 2, 6};
    int arr2[] = {8, 7, 5, 9};

    merge_array(arr1, arr2, 5, 4);
    return 0;
}
