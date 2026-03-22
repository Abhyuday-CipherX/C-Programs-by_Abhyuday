//user defined function to make a simulation of a game of chance (shooting craps)
/*Shooting craps is a game of chance played in rounds using two six-sided dice.
 Each round starts with a "come-out" roll: rolling a 7 or 11 results in an immediate win,
  while a 2, 3, or 12 is an immediate loss (craps).
  If any other number (4, 5, 6, 8, 9, or 10) is rolled, that number becomes the "point", 
  and the game enters a second phase. The shooter continues rolling until they either roll the point number again to win,
   or roll a 7 (a "seven out") to lose the round, which also ends the round and passes the dice to the next player.*/
   #include<stdio.h>
   #include<stdlib.h>
   #include<ctype.h>
int throw(void)
{
    float x1,x2;
    int n1,n2;
    x1=rand()/32768.0;
    x2=rand()/32768.0;
    n1=(int)(6.0*x1)+1; 
    n2=(int)(6.0*x2)+1;
    return(n1+n2);
}
   void play(void)
   {
    int score1,score2;
    char dummy;
    printf("please throw the dice");
    scanf("%c",&dummy);
    printf("\n");
    score1=throw();
    printf("\n%2d is your score ",score1);
    switch (score1)
    {
    case 7:
    case 11: printf("you win");
             break;
    case 2: 
    case 3:
    case 12:printf("you lose");
            break;         
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10: printf("throw the dice once again");
                do{
                    scanf("%c",&dummy);
                    score2=throw();
                    printf("the number obtained on another throw is %d\n",score2);
                }while(score1!=score2 && score2!=7);
                if(score1==score2)
                printf("You Win");
                else
                printf("You Lose");
                break;
    }
    return;
   }
   void main()
   {
    printf("Do you want to play the game of shooting carps? enter Y for yes N for no ");
    char ch;
    scanf("%c",&ch);
    if(ch=='Y')
    {
        printf("Welcome to the game of shooting craps");
        play();
    }
   else if(ch=='N')
   printf("NO worries play the game when you are free");
   else
   printf("Wrong Input");
   }