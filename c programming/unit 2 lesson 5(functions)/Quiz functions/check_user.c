/*
 * check_user.c
 *description:c program to s string from the user and check if it is the same user name or not
 *  Created on: 9 Jan 2024
 *      Author: walid
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[100],arr2[100];// Declaring two array of characters to store both the name and user name
	int i=0;

	printf("enter a string\n");
	fflush(stdout);
	gets(arr1);
	printf("enter your name :\n");
	fflush(stdout);
	gets(arr2);
	while((arr1[i]==arr2[i]))//start looping by compare first char. in both strings
	{

		if((arr1[i]=='\0')||(arr2[i]=='\0'))
		{
			break;// break the loop if one of each user name is ended
		}

		i++;



	}
	if((arr1[i]=='\0')&&(arr2[i]=='\0'))// in case both strings ended together with the same character

		printf("identical");
	else
		printf("different");

}
