#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[60] = "I will edit this file.\n";

    //******Reading File******
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("%s",string);

    ptr = fopen("myfile.txt","a");
    fprintf(ptr, "%s",string);
    

    return 0;
}   