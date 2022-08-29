#include <stdio.h>
int main() {
    char grades;

    printf("Enter the grade you got in test: ");
    scanf("%c", &grades);

    switch(grades){
        case 'A':
            printf("Outstanding Performance");
            break;
        case 'B':
            printf("Good Performance");
            break;
        case 'C':
            printf("Average Performance Can be improved");
            break;
        case 'D':
            printf("Better luck next time!!");
            break;
        default:
            printf("Are you Mad!!!!!!!!!");
    }
return 0;
}   