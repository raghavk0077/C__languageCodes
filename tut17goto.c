#include <stdio.h>
int main() {
    // label:
    //     printf("Helloo\n");
    // printf("Hi\n");
    // goto label;

    int num;
    for (int i = 0; i < 5; i++)
   {
        printf("%d\n",i);
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the number, enter 0 to exit: ");
            scanf("%d", &num);
            if(num==0){
            goto end;
            }
        }
        
    }
    end:
    
return 0;
}