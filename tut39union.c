#include <stdio.h>
#include <string.h>

union Student
{
    char name[30];
    int rollNo;
    int marks;
};

int main()
{
    union Student u;
    // u.name[30] = "Raghav";
    u.rollNo = 1058;
    u.marks = 23;
    strcpy(u.name,"Raghav");

    printf("The name of student is %s\n",u.name);
    printf("The rollNo of student is %d\n",u.rollNo);
    printf("The marks of student is %d\n",u.marks);

return 0;
}