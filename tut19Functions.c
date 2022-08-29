#include <stdio.h>
//with argument without return
// int printstar(int n){
//     int i = 0;
//     while(i <= n){
//         printf("%c", '*');
//         i++;
//     }
// }

//with argument with return
// int sum(int a, int b){
//     return a+b;
// }

//without argument with return
// int takeNumber(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     return n;
// }

//without argument without return
int display(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("YOUR NAME IS: %s" , name);
}

int main() {
    //printstar(7);
    // int c = sum(8,9);
    // printf("%d",c);

    // int x = takeNumber();
    // printf("The n umber entered is %d", x);
    display();
    
return 0;
}