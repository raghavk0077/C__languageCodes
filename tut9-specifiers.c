#include <stdio.h>
#define Pi 3.14

int main(){
    
    const int a = 12;
    //a = 4;   value of a can't be changed

    printf("%f", Pi );  // constant value of pi defined as preprocessor and it can't be changed
    printf("\n%d", a);
    
    return 0;

}
