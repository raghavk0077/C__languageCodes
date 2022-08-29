#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Changer(int *a, int *b){
    *a = *a + *b;
    *b = *a - (*b)*2;
}
int main() {

    int n1,n2;
    printf("Enter number 1: ");
    scanf("%d",&n1);
    printf("Enter number 2: ");
    scanf("%d",&n2);

    Changer(&n1,&n2);
    printf("Number 1 = %d and Number 2 = %d",n1,n2);

    // swap(&n1, &n2);
    // printf("After swapping\nNumber1 = %d and Number 2 = %d",n1,n2);
    
return 0;
}