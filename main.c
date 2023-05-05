/************************************************************************/
/* Complex application                                                  */
/* Copyright: 2023                                                      */
/* Authors: Popovici Andrei <popoviciandrei2004@gmail.com>              */
/*          Sorodoc Matei <mateisoro@gmail.com>                         */
/* Version: 8/01/2023                                                   */
/************************************************************************/

/*Include standard headers: */
#include <stdio.h>
#include <stdlib.h>

/*Include modules header that re directly invoked: */
#include "startstop.h"
#include "questions.h"
#include "score.h"
#include "rewards.h"


int main()
{
    startScreen();
    startChoice();
    showQuestions();
    showFinalScore();
    showStats();
    topScore();

    return 0;

}
