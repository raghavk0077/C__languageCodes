#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int n;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the length of your employee ID of employee %d: ",i+1);
        scanf("%d",&n);

        ptr = (char*) malloc((n+1) * sizeof(char));

        printf("Enter the employee ID of employee %d: ",i);
        scanf("%s",ptr);

        printf("The employee ID of employee %d = %s\n",i+1,ptr);
        
        free(ptr);
    }


    
    
    return 0;
}