/**************************************************/
/* questions.h - Header file for module questions */
/* Copyright: 2023                                */
/* Author: Sorodoc Matei <mateisoro@gmail.com>    */
/* Version: 8/01/2023                             */
/**************************************************/
#ifndef QUESTIONS_H_INCLUDED
#define QUESTIONS_H_INCLUDED

/* Headers required by the following definitions/declarations: */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<time.h>

/* Global variables declarations: */
extern char correctAns[20];
extern char usrAns[20];
extern double timeLimit;
extern int outOfTime;
extern double timeTracking[20];
extern double timeBonus;


/* Function prototypes: */
extern void showQuestions();
extern void processQuestions();
extern void storeAns();
extern void timeFactor();
extern void sound();


#endif // QUESTIONS_H_INCLUDED
