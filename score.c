/************************************************************************/
/* score.c - See score.h for copyright and info                         */
/************************************************************************/

/*System headers and application specific headers: */
#include "score.h"
#include "questions.h"
#include "startstop.h"

/*Public global variables: */
int initialScore;
int finalScore;
int rawScore;
int wildGuess;
int maxScore = 0;

/*Implementation of the public functions: */


/*************************************************************************/
/* FUNCTION NAME: verify                                                 */
/* DESCRIPTION: verifies if the given answer is correct, determines      */
/* the time interval and allocates an initial score                      */
/* ARGUMENT LIST: no arguments                                           */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void verify()
{
    initialScore = 0;
    rawScore = 0;

    for(int i = 0; i < 20; i++)
    {
        if(usrAns[i] == correctAns[i] && timeTracking[i] <= timeLimit/2)
        {initialScore+=50;
        rawScore++;}
        else if (usrAns[i] == correctAns[i] && ((timeTracking[i] > timeLimit/2) && (timeTracking[i] < timeLimit)))
        {initialScore+=25;
        rawScore++;}
        else if(usrAns[i] == correctAns[i] && timeTracking[i] > timeLimit)
        {initialScore+=10;
        rawScore++;}
        else if(usrAns[i] != correctAns[i])
        initialScore+=0;
    }
}


/*************************************************************************/
/* FUNCTION NAME: calcFinalScore                                         */
/* DESCRIPTION: displays the wild Capybara and calculates the final score*/
/* based on the wildGuess variable read from the user input              */
/* ARGUMENT LIST: no arguments                                           */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void calcFinalScore()
{
    verify();

    char wildCapy[] = "wildGuess.txt ";
    readFile(wildCapy); // displays a text file

    printf("\n\n\n\n\t\t\t\t\t\t\tTake a wild guess: ");
    scanf("%d", &wildGuess); // wildGuess variable stores how many questions the user thinks he got right

    if(rawScore - wildGuess == 0)
        finalScore = 10 * initialScore;

    else if(abs(rawScore - wildGuess) > 0 && abs(rawScore - wildGuess) <=5)
        finalScore = 5 * initialScore;

    else if(abs(rawScore - wildGuess) > 5 && abs(rawScore - wildGuess) <= 10)
        finalScore = 2 * initialScore;

    else if(abs(rawScore - wildGuess) > 10)
        finalScore = initialScore;

}


/*************************************************************************/
/* FUNCTION NAME: showStats                                              */
/* DESCRIPTION: displays podium and hourglass text files, shows the user */
/* which questions were answered correctly, displays average time taken  */
/* to answer them, as well as how many of them were answered out of time */
/* based on the wildGuess variable read from the user input              */
/* ARGUMENT LIST: no arguments                                           */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void showStats()
{
    system("cls");

    char podium[] = "podium.txt";
    readFile(podium);
    printf("\n\n");

    double timeAverage = 0;
    for (int i = 0; i < 20; i++)
    {
        if(usrAns[i] == correctAns[i])
            printf("\t\t\t\t\t\t\t\t    Question %d: RIGHT\n", i+1);
        else
            printf("\t\t\t\t\t\t\t\t    Question %d: WRONG\n", i+1);
    }
    if(wildGuess == rawScore)
        printf("\n\t\t\t\t\t\t\t\t  Your wild guess was spot on!");
    else
    printf("\n\t\t\t\t\t\t\t\t  You were %d answears off from your wild guess.", abs(wildGuess - rawScore));



    sleep(10);
    system("cls");

    char hourglass[] = "hourglass.txt";
    readFile(hourglass);


    for(int i = 0; i < 20; i++)
        timeAverage += timeTracking[i];

    printf("\n\n\t\t\t\t\t\t\t    Average time: %.2lf\n", timeAverage / 20);

    if(outOfTime == 0)
        printf("\t\t\t\t\t\t  You answered all questions in under 10 seconds!");
    else
        printf("\n\t\t\t\t\t\t  You ran out of time on %d questions.\n", outOfTime);
    sleep(5);
    system("cls");

}


/*************************************************************************/
/* FUNCTION NAME: showFinalScore                                         */
/* DESCRIPTION: displays a text file, calls calcFinalScore and displays  */
/* the final score                                                       */
/* ARGUMENT LIST: no arguments                                           */
/* RETURN VALUES: void                                                   */
/* CHANGES: -                                                            */
/*************************************************************************/
void showFinalScore()
{

    calcFinalScore();

    system("cls");

    char endScore[] = "endScore.txt ";
    readFile(endScore);
    printf("\n\n\n\n\t\t\t\t\t\t\t\tYOUR FINAL SCORE IS: %d\n", finalScore);

    sleep(5);
    system("cls");


}


/*********************************************************************************************************************/
/* FUNCTION NAME: topScore                                                                                           */
/* DESCRIPTION: verifies the maximum score, stores it in the file "maxScore.txt" and prints different files and      */
/*              calls different functions, depending on the score that the user got                                  */
/* ARGUMENT LIST: -                                                                                                  */
/* CHANGES: -                                                                                                        */
/*********************************************************************************************************************/
void topScore()
{
    FILE *fpScore = fopen("maxScore.txt", "r");
    fscanf(fpScore,"%d",&maxScore); // stores in the variable "maxScore" the all time high score
    fclose(fpScore);

    if(maxScore <= finalScore || finalScore == 10000) //if the user's score is smaller than the all time max or the user scored the maximum possible score
    {
        FILE *fpScore = fopen("maxScore.txt", "w");
        fprintf(fpScore,"%d",finalScore);
        fclose(fpScore);

        char moreMax[] = "moreMax.txt";
        readFile(moreMax);

        sleep(3);

        rocket();// animation
        stars();// animation

        sleep(2);

        sky();

    }
    else if(finalScore > (maxScore-2000) && finalScore < maxScore)
            {
                char equalMax[] = "equalMax.txt";
                readFile(equalMax);
                printf("\n\n\n\n\n");

            }
        else if(maxScore > finalScore)
            {
                char lessMax[] = "lessMax.txt";
                readFile(lessMax);
                printf("\n\n\n\n\n");

            }
}
