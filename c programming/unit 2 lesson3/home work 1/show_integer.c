/*

EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################
 * show_integer.c
 *
 *  Created on: 26 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
void main()
{
	int num;
	printf("please enter an integer");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
    printf("\n you entered %d \n",num);

}

