#include <stdio.h>
int main() {
    int a = 100;
    int *ptr = &a;
    int *ptr2 = NULL;   
    int *ptr3 = NULL;

    printf("Address of a variable is %p\n",&a);   
    printf("Address of a variable is %p\n",ptr);   
    printf("Address of pointer to variable a is %p\n",&ptr);   
    printf("Value of a variable is %d\n",*ptr);   
    printf("Value of a variable is %d\n",a);  
    printf("Address of pointer2 is %p\n",ptr2);   
    printf("Address of pointer3 is %p\n",ptr3);   
return 0;
}




