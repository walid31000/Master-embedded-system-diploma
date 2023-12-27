/*
 * find_ascii.c
 *
EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################
 *  Created on: 26 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
int main()
{
	char x;
	printf("enter a character \n");
	fflush(stdout);
	scanf("%c", &x);
    printf ("ASCII value of %c=%d",x,x);
}

