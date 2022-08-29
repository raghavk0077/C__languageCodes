#include <stdio.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        printf(" ");
        for(int j = 0; j <= i; j++){
            printf("*");

        }
        printf("\n");
    }
return 0;
}