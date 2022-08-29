#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = NULL;
    if(ptr != NULL){
        printf("The value of a is %d\n",ptr);
    }
    else{
        printf("The pointer is the null pointer");
    }
    return 0;
}