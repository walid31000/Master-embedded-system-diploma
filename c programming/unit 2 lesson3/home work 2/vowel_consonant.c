/*
 * vowel_consonant.c
 *Description : C program to check vowel or consonants
 *  Created on: 26 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
int main()
{
	char c;
	printf("please enter a character \n");
	fflush(stdout);
	scanf("%c",&c);
	if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
			{
		switch(c)
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':printf("you entered a vowel");break;
		default:printf("you entered a consonat");break;
		}

			}
	else
	{
		printf("wrong input");
	}
}
