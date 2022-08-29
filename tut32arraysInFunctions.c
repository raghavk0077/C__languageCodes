#include <stdio.h>

int func1(int array[]){
    for(int i = 0; i < 4; i++){
        printf("The value at index %d is %d\n",i,array[i]);
    }
    // array[1] = 56; //if value of array changes here it will reflect in main()
    return 0;
}

void func2(int *ptr){
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n",i,*(ptr + i));
    }
    
}

int main() {
    int arr[] = {1,2,3,4};
    // func1(arr);
    func2(arr);
return 0;
}