/************************************************************************/
/* rewards.c - See rewards.h for copyright and info                     */
/************************************************************************/

/*System headers and application specific headers: */
#include "rewards.h"
#include "startstop.h"

/*Private constants*/
const char rocketScience[] =

    "                                                                             * \n\
                                                                            /|\\ \n\
                                                                           / - \\\n\
                                                                           | - |\n\
                                                                           |   |\n\
                                                                           | Q |\n\
                                                                           | U |\n\
                                                                           | I |\n\
                                                                           | Z |\n\
                                                                          /| Z |\\\n\
                                                                         / |   | \\\n\
                                                                        |  |   |  |\n\
                                                                         `-\"\"\"\"\"\-`\n\
                                                                         |||||||||\ \n\
                                                                          |||||||   \n\
                                                                           ||||| \n\
                                                                            ||| \n\
                                                                             | \n\
                                                                              \n" ;



/*Implementation of the public functions: */



/*************************************************************************/
/* FUNCTION NAME: delay                                                  */
/* DESCRIPTION: provides a delay for the rocket animation, based on two  */
/* consecutive for loops that keep the processor busy                    */
/* Argument             Type     IO   Description                        */
/* ____________________ ________ ____ ___________________________________*/
/* value          usigned int    I    delays the steps of the animation  */
/* CHANGES: -                                                            */
/*************************************************************************/
void delay( unsigned int value)
{
    unsigned int count1 =0;
    unsigned int count2 = 0;

    for(count1 = 0; count1 < value ; count1++ )
    {
        for(count2 = 0; count2 < count1 ; count2++ )
        {

        }
    }
}


/*************************************************************************/
/* FUNCTION NAME: rocket                                                 */
/* DESCRIPTION: provides an animation for a rocket going up              */
/* ARGUMENT LIST: no arguments                                           */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void rocket()
{

    int jumpControlAtBottom = 0;
    const int someDelay = 3500;
    int shifControl = 0;


    //jump to bottom of console

    for (jumpControlAtBottom = 0; jumpControlAtBottom < 100; ++jumpControlAtBottom)
    {
        printf("\n");
    }

    //Print rocket


    fputs(rocketScience,stdout);
    sleep(2);

    for (shifControl = 0; shifControl < 40; ++shifControl)
    {
        // Rocket move on the basis of delay
        delay(someDelay);

        // move rocket a line upward
        printf("\n");
    }
}


/*************************************************************************/
/* FUNCTION NAME: stars                                                  */
/* DESCRIPTION: provides an animation for traveling through a sky full of*/
/* stars and stops at a given point to show the "this is you" scene      */
/* ARGUMENT LIST: no arguments                                           */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void stars()
{
    int x=0, y=0, ok=1, n, stop = 120;

    for(x=1; x>0 && x<stop; x++)
    {
        n=0;
        for(y=1; y>0 && n<250; y++)
        {

            if(sqrt(x*x + y*y) > (int) sqrt(x*x + y*y))
               {printf(" "); }
            else
                printf("*");
            n++;
        }
    }

    printf("This is you -> * <- This is you\n");
    sleep(0);

    for(x=1; x>0 && x<stop; x++)
    {
        n=0;
        for(y=1; y>0 && n<40; y++)
        {

            if(sqrt(x*x + y*y) > (int) sqrt(x*x + y*y))
               {printf(" "); }
            else
                printf("*");
            n++;
        }
    }
}


/*************************************************************************/
/* FUNCTION NAME: sky                                                    */
/* DESCRIPTION: if the user set a new score, this function is called in  */
/* order to let him pick a place on the "sky" to place their "star"      */
/* the coordinates are read from the user and a "*" character is put in  */
/* the sky text file at loc variable, which is calculated                */
/* stars and stops at a given point to show the "this is you" scene      */
/* ARGUMENT LIST: no arguments                                           */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void sky()
{
    system("cls");

    int lin,col,loc = 0;

    char starFinal[] = "starFinal.txt";
    readFile(starFinal);

    sleep(5);
    system("cls");

    char coordinates[] = "coordinates.txt";
    readFile(coordinates);

    //printf("Introduce the line(from 1 to 18) and the column(from 1 to 56) on which you want your star.\n\n");
    printf("\n\n\t\t\t\t\t\tx(from 1 to 18): ");
    scanf("%d",&lin);
    printf("\n\n\t\t\t\t\t\ty(from 1 to 56): ");
    scanf("%d",&col);

    loc = col + 82 + 66 * (lin - 1);

    system("cls");

    FILE *fpSky = fopen("sky.txt","r+");

    if(loc>=83 && loc <= 1260)
    {
       fseek(fpSky,loc,SEEK_SET);
       fputc('*',fpSky);
       fclose(fpSky);

       FILE *fpSky2 = fopen("sky.txt","r");
       readFile("sky.txt");
       fclose(fpSky2);

    }
}
