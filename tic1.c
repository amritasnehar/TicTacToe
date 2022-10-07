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

void logic1(int l) // player 1 logic

{

    ch[l] = 'O';

    draw(ch);

    if (ch[0] == 'O' && ch[1] == 'O' && ch[2] == 'O')

    {

        printf("\nPlayer 1 Won!!!");

        ge = 0;

        return;
    }

    if (ch[3] == 'O' && ch[4] == 'O' && ch[5] == 'O')

    {

        printf("\nPlayer 1 Won!!!");

        ge = 0;
        return;
    }

    if (ch[6] == 'O' && ch[7] == 'O' && ch[8] == 'O')

    {

        printf("\nPlayer 1 Won!!!");

        ge = 0;
        return;
    }

    if (ch[0] == 'O' && ch[3] == 'O' && ch[6] == 'O')

    {

        printf("\nPlayer 1 Won!!!");

        ge = 0;
        return;
    }

    if (ch[1] == 'O' && ch[4] == 'O' && ch[7] == 'O')

    {

        printf("\nPlayer 1 Won!!!");

        ge = 0;
        return;
    }

    if (ch[2] == 'O' && ch[5] == 'O' && ch[8] == 'O')

    {

        printf("\nPlayer 1 Won!!!");

        ge = 0;
        return;
    }

    if (ch[0] == 'O' && ch[4] == 'O' && ch[8] == 'O')

    {

        printf("\nPlayer 1 Won!!!");

        ge = 0;
        return;
    }

    if (ch[2] == 'O' && ch[4] == 'O' && ch[6] == 'O')

    {

        printf("\nPlayer 1 Won!!!");

        ge = 0;
        return;
    }
}

void logic2(int l) // player 2 logic

{

    ch[l] = 'X';

    draw(ch);

    if (ch[0] == 'X' && ch[1] == 'X' && ch[2] == 'X')

    {

        printf("\nPlayer 2 Won!!!");

        ge = 0;

        return;
    }

    if (ch[3] == 'X' && ch[4] == 'X' && ch[5] == 'X')

    {

        printf("\nPlayer 2 Won!!!");

        ge = 0;

        return;
    }

    if (ch[6] == 'X' && ch[7] == 'X' && ch[8] == 'X')

    {

        printf("\nPlayer 2 Won!!!");

        ge = 0;

        return;
    }
if(ch[0]=='X'&&ch[3]=='X'&&ch[6]=='X')

    {

        printf("\nPlayer 2 Won!!!");

        ge=0;

        return;

    }

     if(ch[1]=='X'&&ch[4]=='X'&&ch[7]=='X')

    {

        printf("\nPlayer 2 Won!!!");

        ge=0;

        return;

    }

     if(ch[2]=='X'&&ch[5]=='X'&&ch[8]=='X')

    {

        printf("\nPlayer 2 Won!!!");

        ge=0;

        return;

    }

     if(ch[0]=='X'&&ch[4]=='X'&&ch[8]=='X')

     {


        printf("\nPlayer 2 Won!!!");

        ge=0;

        return;

    }
    



 
}
