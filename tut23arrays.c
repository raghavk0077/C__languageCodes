#include <stdio.h>
int main() {
    // int array[5]= {0,1,2,3,4};
    // for(int i = 0; i < 5; i++){
    //     printf("%d ", array[i]);
    // }

    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
        
    }
    
return 0;
}   