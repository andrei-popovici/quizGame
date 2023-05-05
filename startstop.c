/************************************************************************/
/* startstop.c - See startstop.h for copyright and info                 */
/************************************************************************/

/*System headers and application specific headers: */
#include "startstop.h"

/*Public global variables: */
int nameExist = 0;
char name[30];
char ch = '\0';

/*Implementation of the public functions: */


/************************************************************************/
/* FUNCTION NAME: startScreen                                           */
/* DESCRIPTION: prints the starting screen, leaving it on for 3 seconds */
/* ARGUMENT LIST: -                                                     */
/* CHANGES: -                                                           */
/************************************************************************/
void startScreen()
{
    char startScreen1[] = "startScreen1.txt";

    readFile(startScreen1); //reads and prints the file "startScreen1.txt"

    printPc1();

    sleep(3); //pauses the execution of the program for 3 seconds

}


/************************************/
/* FUNCTION NAME: printPc1          */
/* DESCRIPTION: prints an ASCII art */
/* ARGUMENT LIST: -                 */
/* CHANGES: -                       */
/************************************/
void printPc1()
{
    printf("\n\n");
    printf("\t\t\t\t\t\t\t              _________________\n");
    printf("\t\t\t\t\t\t\t             /                /|\n");
    printf("\t\t\t\t\t\t\t            /                / |\n");
    printf("\t\t\t\t\t\t\t           /________________/ /|\n");
    printf("\t\t\t\t\t\t\t        ###|      ____      |//|\n");
    printf("\t\t\t\t\t\t\t       #   |     /   /|     |/.|\n");
    printf("\t\t\t\t\t\t\t      #  __|___ /   /.|     |  |_______________  \n");
    printf("\t\t\t\t\t\t\t     #  /      /   //||     |  /              /| \n");
    printf("\t\t\t\t\t\t\t    #  /      /___// ||     | /              / | \n");
    printf("\t\t\t\t\t\t\t    # /______/!   || ||_____|/              /  | \n");
    printf("\t\t\t\t\t\t\t    #| . . .  !   || ||                    /   | \n");
    printf("\t\t\t\t\t\t\t    #|  . .   !   || //      ________     /    | \n");
    printf("\t\t\t\t\t\t\t    /|   .    !   ||//~~~~~~/9  0000/    /     | \n");
    printf("\t\t\t\t\t\t\t   / |        !   |'/      /9  0000/    /      | \n");
    printf("\t\t\t\t\t\t\t  /  \\________!___|/      /9  0000/    /       | \n");
    printf("\t\t\t\t\t\t\t /        /_____/        /9  0000/    /        | \n");
    printf("\t\t\t\t\t\t\t/                        ``^^^^^^    /         | \n");
    printf("\t\t\t\t\t\t\t+===================================/          |  \n");
    printf("\t\t\t\t\t\t\t|                                   |__________|  \n");
    printf("\t\t\t\t\t\t\t|                                   |             \n");
    printf("\t\t\t\t\t\t\t|                                   |             \n");
    printf("\t\t\t\t\t\t\t|                                   |             \n");
    printf("\t\t\t\t\t\t\t|                                   |             \n");
    printf("\t\t\t\t\t\t\t|                                   |             \n");
    printf("\t\t\t\t\t\t\t|                                   |             \n");
    printf("\t\t\t\t\t\t\t|   Made by                         |             \n");
    printf("\t\t\t\t\t\t\t|                                   |             \n");
    printf("\t\t\t\t\t\t\t|              Popovici Andrei      |             \n");
    printf("\t\t\t\t\t\t\t|                                   |             \n");
    printf("\t\t\t\t\t\t\t|              Sorodoc Matei        |             \n");
    printf("\t\t\t\t\t\t\t|___________________________________|             \n");

}


/***********************************************************/
/* FUNCTION NAME: printPc2                                 */
/* DESCRIPTION: clears the console and prints an ASCII art */
/* ARGUMENT LIST: -                                        */
/* CHANGES: -                                              */
/***********************************************************/
void printPc2()
{
    system("cls"); //clears the console

    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t             ________________________________________________\n");
    printf("\t\t\t\t\t            /                                                \\ \n");
    printf("\t\t\t\t\t           |    _________________________________________     |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |           Welcome to The Game           |    |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |     -->Press S to start the quizz       |    |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |     -->Press Q for qutting              |    |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |                                         |    |\n");
    printf("\t\t\t\t\t           |   |_________________________________________|    |\n");
    printf("\t\t\t\t\t           |                                                  |\n");
    printf("\t\t\t\t\t           \\__________________________________________________/ \n");
    printf("\t\t\t\t\t                   \\___________________________________/\n");
    printf("\t\t\t\t\t                ___________________________________________\n");
    printf("\t\t\t\t\t             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_\n");
    printf("\t\t\t\t\t          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_\n");
    printf("\t\t\t\t\t       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_\n");
    printf("\t\t\t\t\t    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_\n");
    printf("\t\t\t\t\t _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-_\n");
    printf("\t\t\t\t\t:-------------------------------------------------------------------------:\n");
    printf("\t\t\t\t\t`---._.-------------------------------------------------------------._.---'\n");
}


/*********************************************************************************************************************/
/* FUNCTION NAME: startChoice                                                                                        */
/* DESCRIPTION: prints an ASCII art, reads a character from the user and calls a function depending on the character */
/* ARGUMENT LIST: -                                                                                                  */
/* CHANGES: -                                                                                                        */
/*********************************************************************************************************************/
void startChoice()
{
    char c = '\0';
    printPc2();

    scanf("%c",&ch);

    switch(ch)
    {
        case('q'):

            quitStart();

        break;

        case('Q'):

            quitStart();

        break;

        case('s'):


            startGame();

        break;

        case('S'):


            startGame();

        break;

    }

}


/*********************************************************************************************************************/
/* FUNCTION NAME: startGame                                                                                          */
/* DESCRIPTION: calls the function "infoStart", reads an username from the user, verifies if the name is already     */
/*              used(through the function "nameOccurance"), asks for a new username, if already used, otherwise,     */
/*              prints the name in the file "Names.txt"                                                              */
/* ARGUMENT LIST: -                                                                                                  */
/* CHANGES: -                                                                                                        */
/*********************************************************************************************************************/
void startGame()
{
    infoStart();

startGame:

    nameExist = 0;

    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tInsert your username: ");
    scanf("%s",&name);

    nameOccurance(); //verifies if the username is already in use
    if (nameExist == 1)
    {
        goto startGame;
    }

    else
    {
        FILE *fpName = fopen("Names.txt", "a"); //opens the file "Names.txt"
        fwrite(&name, sizeof(name),1,fpName);   //writes the username in the file "Names.txt"
        fputs("\n",fpName);
        fclose(fpName); //closes the file "Names.txt"

    }

}


/*********************************************************************************************************************/
/* FUNCTION NAME: quitStart                                                                                          */
/* DESCRIPTION: clears the console, prints the file "quitStartText.txt" and terminates the execution of the program  */
/* ARGUMENT LIST: -                                                                                                  */
/* CHANGES: -                                                                                                        */
/*********************************************************************************************************************/
void quitStart()
{
    system("cls"); //clears the console

    char quitStartText[] = "quitStartText.txt";

    readFile(quitStartText); //prints the file "quitStartText.txt"

    exit(0); //terminates the execution of the program
}


/*********************************************************************************************************************/
/* FUNCTION NAME: infoStart                                                                                          */
/* DESCRIPTION: clears the console, prints the files "infoTitle.txt" and "infoContent.txt", reads a number from the  */
/*              user and , based on that, calls the function "quitStart" or not, following to clear the console      */
/* ARGUMENT LIST: -                                                                                                  */
/* CHANGES: -                                                                                                        */
/*********************************************************************************************************************/
void infoStart()
{
    system("cls");

    int choiceNr = 0;

    char infoTitle[1000] = "infoTitle.txt";
    char infoContent[1000] = "infoContent.txt";

    readFile(infoTitle);
    readFile(infoContent);

    printf("\n\n\t\t\t\t\t");
    scanf("%d",&choiceNr);

    if(choiceNr != 1)
    {
        quitStart();
    }

    system("cls");

}


/*******************************************************************************/
/* FUNCTION NAME: readFile                                                     */
/* DESCRIPTION: prints the contents of a file                                  */
/* ARGUMENT LIST: -                                                            */
/* Argument             Type     IO   Description                              */
/* __________________   ______  ___  __________________________________________*/
/*         s            char     I    stores the name of a file for easy acces */
/* CHANGES: -                                                                  */
/*******************************************************************************/
void readFile(char *s)
{
    char c;

    FILE *fp = fopen(s,"r");

    c = fgetc(fp); // reads and puts in the variable c the first character from the file

    while(c != EOF) // reads and prints characters until it reaches END OF FILE
    {
        printf("%c",c);
        c = fgetc(fp);
    }

    fclose(fp);
}


/**************************************************************************************************/
/* FUNCTION NAME: nameOccurance                                                                   */
/* DESCRIPTION: verifies if an username is already used and if it is prints the contents of a file*/
/*              through calling the function "readFile"                                           */
/* ARGUMENT LIST: -                                                                               */
/* CHANGES: -                                                                                     */
/**************************************************************************************************/
void nameOccurance()
{
    FILE *fpName = fopen("Names.txt", "r");
    nameExist = 0;

    char nameStore[60];

    while(fgets(nameStore,200,fpName)) //reads every line of the file "Names.txt"
    {
        char *location = strstr(nameStore, name); //verifies if the name appears on any of the lines

        if(location != NULL) // if the name exists, the value of the variable nameExist will become 1
        {
            nameExist = 1;
            break;
        }

    }

    if(nameExist == 1)
        {
            system("cls");
            char newName[13] = "newName.txt";
            readFile(newName);
            sleep(3);
            system("cls");

        }

}





