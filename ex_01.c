char my_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    
     while ( dest[i] != 0)
     {
        dest[i] = src[i]; 
        i++;
     }
      return dest[i];
}    
