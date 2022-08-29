#include <stdio.h>

void reverse(int arr[])
{
    int temp;
   for (int i = 0; i < 8/2; i++)
   {
       temp = arr[i];
       arr[i] = arr[7-i];
       arr[7-i] = temp;
   }
   
}
int main()
{
    int arr[] = {12, 45, 6, 25, 89, 54, 4, 1};
    reverse(arr);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}