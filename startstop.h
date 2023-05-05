/************************************************************************/
/* startstop.h - Header file for module startstop                       */
/* Copyright: 2023                                                      */
/* Author: Popovici Andrei <popoviciandrei2004@gmail.com>               */
/* Version: 8/01/2023                                                   */
/************************************************************************/
#ifndef STARTSTOP_H_INCLUDED
#define STARTSTOP_H_INCLUDED

/* Headers required by the following definitions/declarations: */
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>

/* Global variables declarations: */
extern char ch;
extern char name[30];
extern int nameExist;

/* Function prototypes: */
extern void quitStart();
extern void startScreen();
extern void printPc2();
extern void startChoice();
extern void startGame();
extern void readFile(char*);
extern void nameOccurance();

#endif // STARTSTOP_H_INCLUDED
