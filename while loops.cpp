#include <stdio.h>
int main(){

    int Secretnumber = 10;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    int outofguess = 0;


    while (guess != Secretnumber && outofguess == 0)
    {
        if (guesscount < guesslimit)
        {
            printf("Guess a number: ");
            scanf("%d\n", &guess);
             guesscount++;
        } else {
            outofguess = 1;
         }
        
        
       
    }
    if (outofguess ==1)
    {
        printf("out of guess");
    } else
    {
        printf(" you win");
    }
    
    





   
   
   
   
   
    return 0;
}