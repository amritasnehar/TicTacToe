// TIC TAC TOE game between 2 players or player vs. computer
#include <stdio.h>
#include<stdlib.h>


char ch[9]={'1','2','3','4','5','6','7','8','9'};// for putting numbers for respective blocks

int ge=1;//this is a game variable which decide when gameover 

int menu()// for display menu

{

    int ch;

    printf("\t***** 1 Player vs Computer ***** (mode : 1)");

      printf("\n\t***** 1 Player vs 2 Player ***** (mode : 2)");

      mode:

      printf("\n\nEnter your mode : ");

      scanf("%d",&ch);

      if(!(ch==1||ch==2))

      {

          printf("Wrong input\n* press '1' for mode : 1\n* press '2' for mode : 2\n");

          goto mode;

      }

      return ch;

}

void tie()// for checking tie or draw

{

    int i=0,flag=0;


    for(i=0;i<9;i++)

    {

        if(!(ch[i]=='O'||ch[i]=='X'))

        {

            flag=1;


            break;

        }

    }

    if(flag==0)

    {

        printf("Draw");

        ge=0;


    }





 
}