/*
 * string_length.c
 *descripton:c program to find the length of a string
 *  Created on: 31 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
int main()
{
	char string[100];
	int counter=0;
	printf("enter a string \n");
	fflush(stdout);fflush(stdin);
	gets(string);
	while(string[counter]!='\0')
	{
		counter++;
	}
	printf("length of string:%d",counter);
}
