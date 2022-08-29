#include <stdio.h>

void printStr(char arr[]){
    int i = 0;
    while(arr[i] != '\0'){
        printf("%c",arr[i]);
        i++;
    }
}
int main() {
    //char str[] = {'r', 'a', 'g', 'h', 'a', 'v', '\0'};
    //printStr(str);
    char str[40];
    gets(str);// this function is used for taking character values as string as it also includes white spaces
    printf("%s\n",str);
    puts(str);
return 0;
}