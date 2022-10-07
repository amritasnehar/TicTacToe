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
    
 if(ch[2]=='X'&&ch[4]=='X'&&ch[6]=='X')

    {

        printf("\nPlayer 2 Won!!!");

        ge=0;

        return;

    }

}

void draw(char x[9]) // for drawing basic structure of tic tac toe

{

    system("cls");

     printf("\n\t\t\t T i c     T a c    T o e");

    printf("\n Player 1 : O");

    printf("\n Player 2 : X");

    printf("\n\t\t\t   |   |     ");

    printf("\n\t\t\t %c | %c | %c  ",x[0],x[1],x[2]);

    printf("\n\t\t\t---+---+---");

    printf("\n\t\t\t   |   |     ");

    printf("\n\t\t\t %c | %c | %c  ",x[3],x[4],x[5]);

    printf("\n\t\t\t   |   |     ");

    printf("\n\t\t\t---+---+---");

    printf("\n\t\t\t %c | %c | %c  ",x[6],x[7],x[8]);

    printf("\n\t\t\t   |   |     \n\n");

}

void draw2(char x[9])//for drawing basic structure of tic tac toe for computer mode

{

    system("cls");

     printf("\n\t\t\t T i c     T a c    T o e");

    printf("\n Player 1 : O");

    printf("\n Computer : X");

    printf("\n\t\t\t   |   |     ");

    printf("\n\t\t\t %c | %c | %c  ",x[0],x[1],x[2]);

    printf("\n\t\t\t---+---+---");

    printf("\n\t\t\t   |   |     ");

    printf("\n\t\t\t %c | %c | %c  ",x[3],x[4],x[5]);

    printf("\n\t\t\t   |   |     ");

    printf("\n\t\t\t---+---+---");

    printf("\n\t\t\t %c | %c | %c  ",x[6],x[7],x[8]);

    printf("\n\t\t\t   |   |     \n\n");

}

int turn=0,c,cr1,cr2,cr3,cr4,s1,s2,s3,s4,c_1,c_2,c_3,c_4,c_5,c_6,c_7,c__1,c__2,c__3,c__4,c__5;

int s_1,s_2,s_3,s_4,s_5,s_6,s_7,cr_1,cr_2,cr_3,cr_4,cr_5,cr_6,cr_7;



void tcomp()//computer logic

{


    switch(turn)

    {

     case 1:

    {

    if(ch[4]=='O')

    {

        c=1;

         ch[8]='X';

         draw2(ch);

         return;

    }

    if(ch[0]=='O')

    {

        cr1=1;

            ch[4]='X';

            draw2(ch);

            return;

    }

    if(ch[2]=='O')

    {

        cr2=1;

            ch[4]='X';

            draw2(ch);

            return;

    }

    if(ch[6]=='O')

    {

        cr3=1;

            ch[4]='X';

            draw2(ch);

            return;

    }

    if(ch[8]=='O')

    {

        cr4=1;

            ch[4]='X';

            draw2(ch);

            return;

    }

    if(ch[1]=='O')

    {

            s1=1;

            ch[4]='X';

            draw2(ch);

            return;

    }

    if(ch[3]=='O')

    {

            s2=1;

            ch[4]='X';

            draw2(ch);

            return;

    }

    if(ch[5]=='O')

    {

            s3=1;

            ch[4]='X';

            draw2(ch);

            return;

    }

    if(ch[7]=='O')

    {

            s4=1;

            ch[4]='X';

            draw2(ch);

            return;

    }

    break;

    }



    case 3:

    {


        if(c==1)

        {

            if(ch[0]=='O')

            {

                ch[2]='X';

                draw2(ch);

                c_1=1;

                return;



            }

            if(ch[1]=='O')

            {

                ch[7]='X';

                draw2(ch);

                c_2=1;

                return;

            }

            if(ch[2]=='O')

            {

                ch[6]='X';

                draw2(ch);

                c_3=1;

                return;

            }

            if(ch[3]=='O')

            {

                ch[5]='x';

                draw2(ch);

                c_4=1;

                return;

            }

            if(ch[5]=='O')

            {

                ch[3]='X';

                draw2(ch);

                c_5=1;

                return;

            }

            if(ch[6]=='O')

            {

                ch[2]='X';

                draw2(ch);

                c_6=1;

                return;

            }

            if(ch[7]=='O')

            {

                ch[1]='X';

                draw2(ch);

                c_7=1;

                return;

            }

        }


         if(s1==1)

        {

            if(ch[7]=='O')

            {

                s_1=1;

                ch[3]='X';

                draw2(ch);

                return;

            }

            if(ch[0]=='O')

            {

                s_2=1;

                ch[2]='X';

                draw2(ch);

                return;

            }

            if(ch[2]=='O')

            {

                s_3=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[3]=='O')

            {

                s_4=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[5]=='O')

            {

                s_5=1;

                ch[2]='X';

                draw2(ch);

                return;

            }

            if(ch[6]=='O')

            {

                s_6=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[8]=='O')

            {

                s_7=1;

                ch[5]='X';

                draw2(ch);

                return;

            }

        }


        if(s2==1)

        {

            if(ch[0]=='O')

            {

                s_1=1;

                ch[6]='X';

                draw2(ch);

                return;

            }

            if(ch[1]=='O')

            {

                s_2=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[2]=='O')

            {

                s_3=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[5]=='O')

            {

                s_4=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[6]=='O')

            {

                s_5=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[7]=='O')

            {


                s_6=1;

                ch[6]='X';

                draw2(ch);

                return;

            }

            if(ch[8]=='O')

            {

                s_7=1;

                ch[1]='X';

                draw2(ch);

                return;

            }


        }


        if(s3==1)

        {

            if(ch[0]=='O')

            {

                s_1=1;

                ch[1]='X';

                draw2(ch);

                return;

            }

            if(ch[1]=='O')

            {

                s_2=1;

                ch[2]='X';

                draw2(ch);

                return;

            }

            if(ch[2]=='O')

            {

                s_3=1;

                ch[8]='X';

                draw2(ch);

                return;

            }

            if(ch[3]=='O')

            {

                s_4=1;

                ch[8]='X';

                draw2(ch);

                return;

            }

            if(ch[6]=='O')

            {

                s_5=1;

                ch[1]='X';

                draw2(ch);

                return;

            }

            if(ch[7]=='O')

            {

                s_6=1;

                ch[8]='X';

                draw2(ch);

                return;

            }

            if(ch[8]=='O')

            {

                s_7=1;

                ch[2]='X';

                draw2(ch);

                return;

            }


        }


        if(s4==1)

        {

            if(ch[0]=='O')

            {

                s_1=1;

                ch[3]='X';

                draw2(ch);

                return;

            }

            if(ch[1]=='O')

            {

                s_2=1;

                ch[6]='X';

                draw2(ch);

                return;

            }

            if(ch[2]=='O')

            {

                s_3=1;

                ch[8]='X';

                draw2(ch);

                return;

            }

            if(ch[3]=='O')

            {

                s_4=1;

                ch[6]='X';

                draw2(ch);

                return;

            }

            if(ch[5]=='O')

            {

                s_5=1;

                ch[8]='X';

                draw2(ch);

                return;

            }

            if(ch[6]=='O')

            {

                s_6=1;

                ch[8]='X';

                draw2(ch);

                return;

            }

            if(ch[8]=='O')

            {

                s_7=1;

                ch[6]='X';

                draw2(ch);

                return;

            }


        }


        if(cr1==1)

        {

            if(ch[1]=='O')

            {

                cr_1=1;

                ch[2]='X';

                draw2(ch);

                return;

            }

            if(ch[2]=='O')

            {

                cr_2=1;

                ch[1]='X';

                draw2(ch);

                return;

            }

            if(ch[3]=='O')

            {

                cr_3=1;

                ch[6]='X';

                draw2(ch);

                return;

            }

            if(ch[5]=='O')

            {

                cr_4=1;

                ch[1]='X';

                draw2(ch);

                return;

            }

            if(ch[6]=='O')

            {

                cr_5=1;

                ch[3]='X';

                draw2(ch);

                return;

            }

            if(ch[7]=='O')

            {

                cr_6=1;

                ch[3]='X';

                draw2(ch);

                return;

            }

            if(ch[8]=='O')

            {

                cr_7=1;

                ch[3]='X';

                draw2(ch);

                return;

            }


        }


        if(cr2==1)

        {

            if(ch[0]=='O')

            {

                cr_1=1;

                ch[1]='X';

                draw2(ch);

                return;

            }

            if(ch[1]=='O')

            {

                cr_2=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[3]=='O')

            {

                cr_3=1;

                ch[1]='X';

                draw2(ch);

                return;

            }

            if(ch[5]=='O')

            {

                cr_4=1;

                ch[8]='X';

                draw2(ch);

                return;

            }

            if(ch[6]=='O')

            {

                cr_5=1;

                ch[7]='X';

                draw2(ch);

                return;

            }

            if(ch[7]=='O')

            {

                cr_6=1;

                ch[5]='X';

                draw2(ch);

                return;

            }

            if(ch[8]=='O')

            {

                cr_7=1;

                ch[5]='X';

                draw2(ch);

                return;

            }


        }


        if(cr3==1)

        {

            if(ch[0]=='O')

            {

                cr_1=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[1]=='O')

            {

                cr_2=1;

                ch[1]='X';

                draw2(ch);

                return;

            }

            if(ch[2]=='O')

            {

                cr_3=1;

                ch[2]='X';

                draw2(ch);

                return;

            }

            if(ch[3]=='O')

            {

                cr_4=1;

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[5]=='O')

            {

                cr_5=1;

                ch[8]='X';

                draw2(ch);

                return;

            }

            if(ch[7]=='O')

            {

                cr_6=1;

                ch[8]='X';

                draw2(ch);

                return;

            }

            if(ch[8]=='O')

            {

                cr_7=1;

                ch[7]='X';

                draw2(ch);

                return;

            }


        }


        if(cr4==1)

        {

            if(ch[0]=='O')

            {

                cr_1=1;

                ch[1]='X';

                draw2(ch);

                return;

            }

            if(ch[1]=='O')

            {

                cr_2=1;

                ch[5]='X';

                draw2(ch);

                return;

            }

            if(ch[2]=='O')

            {

                cr_3=1;

                ch[5]='X';

                draw2(ch);

                return;

            }

            if(ch[3]=='O')

            {

                cr_4=1;

                ch[7]='X';

                draw2(ch);

                return;

            }

            if(ch[5]=='O')

            {

                cr_5=1;

                ch[2]='X';

                draw2(ch);

                return;

            }

            if(ch[6]=='O')

            {

                cr_6=1;

                ch[7]='X';

                draw2(ch);

                return;

            }

            if(ch[7]=='O')

            {

                cr_7=1;

                ch[6]='X';

                draw2(ch);

                return;

            }


        }


    }

    case 5:

    {


        if(c==1)

        {

            if(c_1==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }

            }

            if(c_2==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }

            }

            if(c_3==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(c_4==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }

            }

            if(c_5==1)

            {

                if(ch[0]=='O')

                {

                    c__5=1;

                    ch[7]='X';

                    draw2(ch);

                    return;

                }

                if(ch[1]=='O')

                {

                    c__1=1;

                    ch[7]='X';

                    draw2(ch);

                    return;

                }

                if(ch[7]=='O')

                {

                    c__2=1;

                    ch[1]='X';

                    draw2(ch);

                    return;

                }

                if(ch[2]=='O')

                {

                    c__3=1;

                    ch[6]='X';

                    draw2(ch);

                    return;

                }

                if(ch[6]=='O')

                {

                    c__4=1;

                    ch[2]='X';

                    draw2(ch);

                    return;

                }

            }

            if(c_6==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                    draw2(ch);

                        printf("Computer wins !!!!");

                        ge=0;

                        return;

                }

                if(ch[5]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(c_7==1)

            {

                if(ch[0]=='O')

                {

                    c__1=1;

                    ch[2]='X';

                    draw2(ch);

                    return;

                }

                if(ch[2]=='O')

                {

                    c__2=1;

                    ch[6]='X';

                    draw2(ch);

                    return;

                }

                if(ch[3]=='O')

                {

                    c__3=1;

                    ch[5]='X';

                    draw2(ch);

                    return;

                }

                if(ch[5]=='O')

                {

                    c__4=1;

                    ch[3]='X';

                    draw2(ch);

                    return;

                }

                if(ch[6]=='O')

                {

                    c__5=1;

                    ch[2]='X';

                    draw2(ch);

                    return;

                }


            }


        }

         if(s1==1)

        {

            if(s_1==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_2==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }

            }

            if(s_3==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_4==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_5==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_6==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_7==1)

            {

                if(ch[3]!='O')

                {

                    ch[3]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[3]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(s2==1)

        {

            if(s_1==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_2==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }

            }

            if(s_3==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_4==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_5==1)

            {

                if(ch[8]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_6==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_7==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(s3==1)

        {

            if(s_1==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_2==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_3==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_4==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_5==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_6==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_7==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(s4==1)

        {

            if(s_1==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_2==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_3==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_4==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_5==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_6==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_7==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(cr1==1)

        {

            if(cr_1==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }

            }

            if(cr_2==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_3==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_4==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_5==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_6==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_7==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }


            }

        }


        if(cr2==1)

        {

            if(cr_1==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_2==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_3==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_4==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_5==1)

            {

                if(ch[1]!='O')

                {

                    ch[1]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[1]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_6==1)

            {

                if(ch[3]!='O')

                {

                    ch[3]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[3]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_7==1)

            {

                if(ch[3]!='O')

                {

                    ch[3]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[3]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

        }


        if(cr3==1)

        {

            if(cr_1==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_2==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_3==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_4==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_5==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_6==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }

    }

            if(cr_7==1)

            {

                if(ch[1]!='O')

                {

                    ch[1]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[1]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

        }


        if(cr4==1)

        {

            if(cr_1==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_2==1)

            {

                if(ch[3]!='O')

                {

                    ch[3]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[3]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_3==1)

            {

                if(ch[3]!='O')

                {

                    ch[3]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[3]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_4==1)

            {

                if(ch[1]!='O')

                {

                    ch[1]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[1]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_5==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_6==1)

            {

                if(ch[1]!='O')

                {

                    ch[1]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[1]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_7==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }


        }


    }

    case 7:

    {

        if(c==1)

        {

            if(c_1==1)

            {


            if(ch[1]=='O')

            {

                ch[7]='X';

                draw2(ch);

                return;

            }

            if(ch[7]=='O')

            {

                ch[1]='X';

                draw2(ch);

                return;

            }

            if(ch[6]=='O')

            {

                ch[1]='X';

                draw2(ch);

                return;

            }

            }

            if(c_2==1)

            {

                    if(ch[5]!='O')

                    {

                        ch[5]='X';

                        draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                    }

                    if(ch[5]=='O')

                    {

                        ch[3]='X';

                        draw2(ch);

                        return;

                    }

            }

            if(c_3==1)

            {

                if(ch[0]=='O')

            {

                ch[3]='X';

                draw2(ch);

                return;

            }

            if(ch[3]=='O')

            {

                ch[0]='X';

                draw2(ch);

                return;

            }

            if(ch[5]=='O')

            {

                ch[0]='X';

                draw2(ch);

                return;

            }

            }

            if(c_4==1)

            {


                    if(ch[7]!='O')

                    {

                        ch[7]='X';

                        draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                    }

                    if(ch[7]=='O')

                    {

                        ch[1]='X';

                        draw2(ch);

                        return;

                    }

            }

            if(c_5==1)

            {

                if(c__1==1)

                {

                    if(ch[6]!='X')

                    {

                        ch[6]='X';

                        draw2(ch);

                        return;

                    }

                    if(ch[6]=='O')

                    {

                        ch[2]='X';

                        draw2(ch);

                        return;

                    }


                }

                if(c__2==1)

                {

                    if(ch[0]=='O')

                    {

                        ch[2]='X';

                        draw2(ch);

                        return;

                    }

                    if(ch[2]=='O')

                    {

                        ch[0]='X';

                        draw2(ch);

                        return;

                    }

                    if(ch[6]=='O')

                    {

                        ch[0]='X';

                        draw2(ch);

                        return;

                    }

                }

                if(c__3==1)

                {

                    if(ch[7]!='O')

                    {

                        ch[7]='X';

                        draw2(ch);

                        printf("Computer wins !!!!");

                        ge=0;

                        return;

                    }

                    if(ch[7]=='O')

                    {

                        ch[1]='X';

                        draw2(ch);

                        return;

                    }

                }

                if(c__4==1)

                {

                    if(ch[1]=='O')

                    {

                        ch[7]='X';

                        draw2(ch);

                        return;

                    }

                    if(ch[7]=='O')

                    {

                        ch[1]='X';

                        draw2(ch);

                        return;

                    }

                    if(ch[0]=='O')

                    {

                        ch[7]='X';

                        draw2(ch);

                        return;

                    }

                }

                if(c__5==1)

                {

                    if(ch[6]!='O')

                    {

                        ch[6]='X';

                        draw2(ch);

                        printf("Computer wins !!!!");

                        ge=0;

                        return;

                    }

                    if(ch[6]=='O')

                    {

                        ch[2]='X';

                        draw2(ch);

                        return;

                    }

                }

            }

            if(c_6==1)

            {

                if(ch[1]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(c_7==1)

            {

                if(c__1==1)

                {

                    if(ch[5]!='O')

                    {

                        ch[5]='X';

                        draw2(ch);

                        printf("Computer wins !!!!");

                        ge=0;

                        return;


                    }

                    if(ch[5]=='O')

                    {

                        ch[3]='X';

                        draw2(ch);

                        return;

                    }


                }

                if(c__2==1)

                {

                    if(ch[0]=='O')

                    {

                        ch[3]='X';

                        draw2(ch);

                        return;

                    }

                    if(ch[3]=='O')

                    {

                        ch[5]='X';

                        draw2(ch);

                        return;

                    }

                    if(ch[5]=='O')

                    {

                        ch[3]='X';

                        draw2(ch);

                        return;

                    }

                }

                if(c__3==1)

                {

                    if(ch[2]!='O')

                    {

                        ch[2]='X';

                        draw2(ch);

                        printf("Computer wins !!!!");

                        ge=0;

                        return;

                    }

                    if(ch[2]=='O')

                    {

                        ch[6]='X';

                        draw2(ch);

                        return;

                    }


                }

                if(c__4==1)

                {

                    if(ch[2]=='O')

                    {

                        ch[6]='X';

                        draw2(ch);

                        return;

                    }

                    if(ch[0]=='O')

                    {

                        ch[6]='X';

                        draw2(ch);

                        return;

                    }

                    if(ch[6]=='O')

                    {

                        ch[0]='X';

                        draw2(ch);

                        return;

                    }


                }

                if(c__5==1)

                {

                    if(ch[5]!='O')

                    {

                        ch[5]='X';

                        draw2(ch);

                        printf("Computer wins !!!!");

                        ge=0;

                        return;


                    }

                    if(ch[5]=='O')

                    {

                        ch[3]='X';

                        draw2(ch);

                        return;

                    }

                }


            }

        }

        if(s1==1)

        {

            if(s_1==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_2==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }

            }

            if(s_3==1)

            {

                if(ch[3]!='O')

                {

                    ch[3]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

 
                    }

                if(ch[3]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_4==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_5==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_6==1)

            {

                if(ch[3]=='O')

                {

                    ch[5]='X';

                     draw2(ch);

                     return;

                }

                if(ch[5]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_7==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(s2==1)

        {

            if(s_1==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_2==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_3==1)

            {

                if(ch[1]=='O')

                {

                    ch[7]='X';

                     draw2(ch);


                    return;

                }

                if(ch[7]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_4==1)

            {

                if(ch[1]!='O')

                {

                    ch[1]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                else

                {

                    ch[6]='X';

                    draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }


            }

            if(s_5==1)

            {

                if(ch[1]!='O')

                {

                    ch[1]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[1]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_6==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_7==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }



        }


        if(s3==1)

        {

            if(s_1==1)

            {

                if(ch[3]=='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_2==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_3==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_4==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_5==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_6==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_7==1)

            {

                if(ch[1]!='O')

                {

                    ch[1]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[1]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(s4==1)

        {

            if(s_1==1)

            {

                if(ch[1]=='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_2==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_3==1)

            {

                if(ch[3]=='O')

                {

                    ch[6]='X';

                     draw2(ch);

                       return;

                }

                if(ch[6]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_4==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_5==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_6==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(s_7==1)

            {

                if(ch[3]!='O')

                {

                    ch[3]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[3]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(cr1==1)

        {

            if(cr_1==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_2==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_3==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_4==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_5==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_6==1)

            {

                if(ch[1]=='O')

                {

                    ch[6]='X';

                     draw2(ch);


                    return;

                }

                if(ch[6]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_7==1)

            {

                if(ch[6]!='O')

                {

                    ch[6]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[6]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(cr2==1)

        {

            if(cr_1==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_2==1)

            {

                if(ch[3]!='O')

                {

                    ch[3]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[3]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_3==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_4==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_5==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_6==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_7==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[6]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(cr3==1)

        {

            if(cr_1==1)

            {

                if(ch[7]!='O')

                {

                    ch[7]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[7]=='O')

                {

                    ch[8]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_2==1)

            {

                if(ch[8]!='O')

                {

                    ch[8]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[8]=='O')

                {

                    ch[7]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_3==1)

            {

                if(ch[0]!='O')

                {

                    ch[0]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[0]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_4==1)

            {

                if(ch[1]!='O')

                {

                    ch[1]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[1]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_5==1)

            {

                if(ch[7]=='O')

                {

                    ch[1]='X';

                     draw2(ch);


                    return;

                }

                if(ch[1]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_6==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_7==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }


            }


        }


        if(cr4==1)

        {


            if(cr_1==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_2==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_3==1)

            {

                if(ch[1]!='O')

                {

                    ch[1]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[1]=='O')

                {

                    ch[0]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_4==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[5]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_5==1)

            {

                if(ch[2]!='O')

                {

                    ch[2]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[2]=='O')

                {

                    ch[3]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_6==1)

            {

                if(ch[5]!='O')

                {

                    ch[5]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[5]=='O')

                {

                    ch[2]='X';

                    draw2(ch);

                    return;

                }


            }

            if(cr_7==1)

            {

                if(ch[3]!='O')

                {

                    ch[3]='X';

                     draw2(ch);

                    printf("Computer wins !!!!");

                    ge=0;

                    return;

                }

                if(ch[3]=='O')

                {

                    ch[1]='X';

                    draw2(ch);

                    return;

                }


            }


        }



    }

    }

}

int main()//main function

{

    int mode;

    start:

    mode=menu();

    char pa;

    if(mode==2)

    {

    int x;

    draw(ch);

    while(ge)

    {

        lable1:

    printf("player 1 turn : ");

    scanf("%d",&x);

    if(!((x<=9)&&(x>=1)))

    {

        printf("Wrong input!!\n\n");

        goto lable1;

    }

     if(ch[x-1]=='X'||ch[x-1]=='O')

    {

        printf("\n!!!!Already occupy!!!!\n\n");

        goto lable1;

    }

    else

    logic1(x-1);

     if(ge==0)

        break;

     tie();

    if(ge==0)

        break;
        lable2:

    printf("Player 2 turn : ");

    scanf("%d",&x);

    if(!((x<=9)&&(x>=1)))

    {

        printf("Wrong input!!\n\n");

        goto lable1;

    }

    if(ch[x-1]=='O'||ch[x-1]=='X')

    {

        printf("\n!!!! Already occupy !!!!\n\n");

        goto lable2;

    }

    else

    logic2(x-1);

    if(ge==0)

        break;


    }

    }

    else

    {

        draw2(ch);

        int x;

        while(ge)

        {

            lable3:

    printf("player 1 turn : ");

    scanf("%d",&x);

    if(!((x<=9)&&(x>=1)))

    {

        printf("Wrong input!!\n\n");

        goto lable3;

    }

     if(ch[x-1]=='X'||ch[x-1]=='O')

    {

        printf("\n!!!!Already occupy!!!!\n\n");

        goto lable3;

    }

    else

    logic1(x-1);

    turn++;

     if(ge==0)

        break;

     tie();

     tcomp();

     turn++;

     if(ge==0)

        break;

        }


    }

printf("\n\nThanks for playing \n\n");

printf("so you want to play another game\nPress 'y' for yes and 'n' for no  ");

fflush(stdin);

scanf("%c",&pa);

if(pa=='y')

{

    ge=1;

    turn=0;

    ch[0]='1';ch[1]='2';ch[2]='3';ch[3]='4';ch[4]='5';ch[5]='6';ch[6]='7';ch[7]='8';ch[8]='9';


    system("cls");

    goto start;

}


    return 0;

}

