#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "raghav";        
    char s2[] = "khanna";
    char s3[50];
    char s4[50];
    // puts(strcat(s1,s2));

    // printf("Length of s1 is %d\n",strlen(s1));        
    // printf("Length of s2 is %d\n",strlen(s2));        

    // puts(strrev(strcat(s1,s2)));

    // printf("%d",strcmp(s1,s2));

    // puts(strcpy(s3,strcat(s1,s2)));
    printf("Enter string 1: ");
    gets(s3);
    char s[] = " is a friend of ";
    strcpy(s3,strcat(s3,s));
    printf("Enter string 2: ");
    gets(s4);
    puts(strcat(s3,s4));

return 0;
}