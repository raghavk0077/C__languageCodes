#include <stdio.h>

int fibonacci(int number){
    if (number == 1 || number == 2){
        return number-1;
    }
    else{
        return fibonacci(number-1) + fibonacci(number-2);
    }
}

int main() {
    int num,sum = 0,num1 = 0, num2 = 1;
    printf("Enter the number: ");
    scanf("%d",&num);

    sum = num1 + num2;

    for(int i = 3; i <= num; i++){
        num1 = num2;
        num2 = sum;
        sum = num1 + num2;
        //printf("%d  ",sum);
    }

    //printf("Fibonacci of %d is %d",num,sum);
    printf("Fibonacci of %d is %d",num,fibonacci(num));
return 0;
}