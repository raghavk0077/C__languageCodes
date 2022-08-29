#include <stdio.h>

int main(){

    int num, index = 1;

    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);

    do{
        printf("%d x %d = %d\n", num, index, num*index);
        index = index + 1;
    }while(index < 11);

    return 0;
}