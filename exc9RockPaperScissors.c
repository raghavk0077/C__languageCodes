#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int n){
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    printf("GAME OF ROCK PAPER AND SCISSORS\nENTER YOUR NAME AND FIGHT WITH AI BOT\n");
    printf("0 = Rock\n1 = Paper\n2 = Scissors\nChoose your moves from these numbers\n\n");
    
    
    char *ptr;
    int n;
    ptr = (char*) malloc(50 * sizeof(char));
    printf("Enter your name: ");
    gets(ptr);
    printf("Welcome %s\n",ptr);

    static int man,bot;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Your Move: ");
        scanf("%d",&n);
        int m = getRandomNumber(3);
         printf("BOT move = %d\n",m);
        if(n == 0 && m == 0){
            printf("No point for both rock\n\n");
        }
        else if(n == 1 && m == 1){
            printf("No point for both Paper\n\n");
        }
        else if(n == 2 && m == 2){
            printf("No point for both Scissors\n\n");
        }
        else if(n == 0 && m == 1){
            printf("BOT got one point\n\n");
            bot++;
        }
        else if(n == 0 && m == 2){
            printf("You got one point\n\n");
            man++;
        }
        else if(n == 1 && m == 2){
            printf("BOT got one point\n\n");
            bot++;
        }
        else if(n == 1 && m == 0){
            printf("You got one point\n\n");
            man++;
        }
        else if(n == 2 && m == 0){
            printf("BOT got one point\n\n");
            bot++;
        }
        else if(n == 2 && m == 1){
            printf("You got one point\n\n");
            man++;
        }
       
        
    }
    if(man > bot){
        printf("%s You won the game with %d points",ptr,man);
    }
    else if(bot > man){
        printf("BOT won the game with %d points",bot);
    }
    else{
        printf("It's a Draw");
    }
    
    free(ptr);
    
    return 0;
}