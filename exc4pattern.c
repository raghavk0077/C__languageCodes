#include <stdio.h>

int TriangularPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int ReversedTrianglePattern(int n){
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int number,index;
    printf("Enter the number: ");
    scanf("%d",&number);

    printf("-------Enter 0 for Triangular Pattern\nand 1 for Reversed triangle pattern-------\n");
    scanf("%d",&index);

    if(index == 0){
        TriangularPattern(number);
    }
    else if(index == 1){
        ReversedTrianglePattern(number);
    }
    else{
        TriangularPattern(number);
        printf("\n\n");
        ReversedTrianglePattern(number);
    }
return 0;
}