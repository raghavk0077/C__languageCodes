#include <stdio.h>

int main()
{
    int a = 123;
    float b = 12.1234;
    void *ptr;
    
    ptr = &a;
    printf("The value of a is = %d\n",*(int *)(ptr));
    ptr = &b;
    printf("The value of b is = %f\n",*(float *)(ptr));
    return 0;
}