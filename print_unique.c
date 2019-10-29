
#include<stdio.h>

void print_unique(int *array, int size)
{
    int i = 0;
    int frst_nb = 0;
    int n;
    
    for(i=0; i<size; i++)
    {
        n=0;
        for (int j = 0; j<i; j++)
        {
            if (array[i] == array[j])
            {
                n++;
            }
        }
        for(int k=i+1; k<size; k++)
        {
            if(array[i] == array[k])
            {
                n++;
            }
        }
	
        if(n==0)
        {
             if(frst_nb == 0) {
                 printf("%d",array[i]);
                 frst_nb = 1;
             }
             else
             {
                 printf(",%d", array[i]);
              }        
        }
    }
    printf("\n");
}




