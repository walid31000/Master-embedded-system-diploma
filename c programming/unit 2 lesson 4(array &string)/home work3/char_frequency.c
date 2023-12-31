/*
 * char_frequency.c
 *description:c program to find the frequency of a character in a string
 *  Created on: 31 Dec 2023
 *      Author: walid
 */

#include<stdio.h>

int main()
{
   char string[100];
   char ch;
   int i=0,counter=0;
   printf("enter a string\n");
   fflush(stdout);fflush(stdin);
   gets(string);
   printf("enter a character to find frequency \n");
   fflush(stdout);fflush(stdin);
   scanf("%c",&ch);
   while(string[i]!='\0')
   {
	   if(string[i]==ch)
	   {
		   counter++;
	   }
	   i++;
   }

	 printf("frequency of %c=%d ",ch,counter);

}
