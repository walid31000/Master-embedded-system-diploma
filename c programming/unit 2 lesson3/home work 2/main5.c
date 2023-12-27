/*
 * main5.c
 *description:program to check whether a character is alphabet or no
 *  Created on: 27 Dec 2023
 *      Author: walid
 */


#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character \n");
	fflush(stdout);
	scanf("%c",&ch);
	if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
	{
		printf("%c is an alphabet\n",ch);
	}
	else
	{
		printf("%c is not an alphabet\n",ch);
	}
}
