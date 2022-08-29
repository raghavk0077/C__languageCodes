#include <stdio.h>
int main() {
    int maths, science;

    printf("Enter Your marks in maths out of 100: ");
    scanf("%d",&maths);

    printf("Enter Your marks in science out of 100: ");
    scanf("%d",&science);

    if(maths>=40 && science>=40){
        printf("YOU HAVE GOT A PRICE OF 50 RUPEES");
    }
    else if(maths<=40 && science<=40){
        printf("YOU HAVE NOT GOT ANY PRICE YOU HAVE BEEN CHARGED FINE OF 1000 RUPEES");
    }
    else{
        printf("YOU HAVE GOT A PRICE OF 25 RUPEES");
    }

return 0;
}