/************************************************************************/
/* questions.c - See questions.h for copyright and info                 */
/************************************************************************/

/*System headers and application specific headers: */
#include "questions.h"
#include "startstop.h"

/* Public global variables */
char correctAns[20]={'a','b','a','d','b','c','b','b','d','a','b','a','c','d','b','d','d','c','d','d'};
char usrAns[20];

int ansCnt = 0;
int count;

clock_t x;
int outOfTime = 0;
int timeTrackingCnt = 0;
double timeLimit = 10.0;
double timeTracking[20];
double timeTaken;
double timeBonus;

/*Implementation of the public functions: */


/*************************************************************************/
/* FUNCTION NAME: timeFactor                                             */
/* DESCRIPTION: calculates time taken by a player to answer and stores it*/
/* ARGUMENT LIST:  No arguments                                          */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void timeFactor()
{
     timeBonus = 0;
     double timeTaken = ((double)x)/CLOCKS_PER_SEC; // calculate time in seconds
     timeTracking[timeTrackingCnt] = timeTaken; // stores time taken for each answer
     timeTrackingCnt++;
     timeBonus = timeLimit - timeTaken; // calculates a bonus time
     if (timeBonus >= 0)
     {
    printf("\nIt took you %.2lf seconds: \n", timeTaken);
     printf("Bonus points may be added!\n\n");

     }
    else
    {
        outOfTime++;
        printf("Time limit exceeded!\n\n");
    }

}


/*************************************************************************/
/* FUNCTION NAME: sound                                                  */
/* DESCRIPTION: makes sounds for: ready,set,go and in/out of time answer */
/* ARGUMENT LIST:  No arguments                                          */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void sound()
{
    //ready, set, go sound
    if(ansCnt == 0)
    {
    Beep(750, 1000);
    Beep(750, 1000);
    Beep(2000, 1000);
    }
    // in time answer sound
    else if(timeBonus >= 0)
       {
          Beep(1900, 500);
          Beep(3000, 500);

       }
    // out of time answer sound
    else if(timeBonus < 0)
        Beep(700, 800);
}


/*************************************************************************/
/* FUNCTION NAME: storeAns                                               */
/* DESCRIPTION: reads the user input answer and stores it in usrAns array*/
/* ARGUMENT LIST:  No arguments                                          */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void storeAns()
{
    char answer = '\0';
    printf("\n\n\t\t\t\t\t\t");
    scanf(" %c", &answer);
    usrAns[ansCnt] = answer;

}


/*************************************************************************/
/* FUNCTION NAME: processQuestions                                       */
/* DESCRIPTION: calls sound function, starts/stops the timer, calls      */
/* storeAns function, increments the number of answered questions calls  */
/* timeFactor function                                                   */
/* ARGUMENT LIST: no arguments                                           */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void processQuestions()
{

    char answear = '\0';
    sound();

    x = clock();     // start timer


    storeAns();
    ++ansCnt;

    x = clock() - x; // stop timer


    timeFactor();

    sleep(1);
    system("cls");

}


/*************************************************************************/
/* FUNCTION NAME: showQuestions                                          */
/* DESCRIPTION: composes the strings needed for the call of the readFile */
/* function in order to display the questions and calls the              */
/* processQuestion function                                              */
/* ARGUMENT LIST: no arguments                                           */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void showQuestions()
{
   int count;
   char buf[12];
    system("cls");
   for (count = 1; count <= 20; count++)
    {
      snprintf(buf, 12, "q%d.txt", count); // puts of type "qX.txt" string into buffer
      readFile(buf);
      processQuestions();
   }

}
