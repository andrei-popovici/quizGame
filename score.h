/************************************************************************/
/* score.h - Header file for module score                               */
/* Copyright: 2023                                                      */
/* Author: Sorodoc Matei <mateisoro@gmail.com>                          */
/*         Popovici Andrei <popoviciandrei2004@gmail.com>               */
/* Version: 8/01/2023                                                   */
/************************************************************************/
#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

/* Headers required by the following definitions/declarations: */
#include <stdio.h>
#include <stdlib.h>

/* Global variables declarations: */
extern int initialScore;
extern int finalScore;
extern int rawScore;
extern int wildGuess;

/* Function prototypes: */
extern void verify();
extern void calcFinalScore();
extern void showFinalScore();
extern void showStats();
extern void topScore();

#endif // SCORE_H_INCLUDED
