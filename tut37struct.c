#include <stdio.h>

struct Student
{
    char name[30];
    int rollNo;
    int marks;
}s1,s2,s3;

void printDetails(struct Student s){
    printf("%s %d %d\n",s.name,s.rollNo,s.marks);
}

int main()
{
   struct Student s1 = {"Raghav", 1058, 780};
   struct Student s2 = {"Mohan", 1053, 480};
   struct Student s3 = {"sharukh", 1055, 580};
   printDetails(s1);
   printDetails(s2);
   printDetails(s3);
    
    return 0;
}