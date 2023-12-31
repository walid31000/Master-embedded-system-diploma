/*
 * reverse_string.c
 *description:c program to reverse string without using library function
 *  Created on: 31 Dec 2023
 *      Author: walid
 */

#include<stdio.h>
#include <string.h>
int main()
{
	char string[100],temp;

	int length,i,j;
	printf("enter the string \n");
	fflush(stdout);fflush(stdin);
	//find out the string length using function gets()
	gets(string);
	length=strlen(string);
	j=length-1;
	printf("reverse string is :");
	for(i=0;i<length/2;i++)
	{
		temp=string[i];
		string[i]=string[j];
		string[j]=temp;
		j--;
	}
	//print the new reversed string
	for(i=0;i<length;i++)
	{
		printf("%c",string[i]);

	}


}

