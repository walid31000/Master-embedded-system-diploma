/*
 * reverse_string.c
 *description:reverse string using recursion
 *  Created on: 7 Jan 2024
 *      Author: walid
 */


#include<stdio.h>
void reverse();
int main()
{
	printf("enter a sentence \n");

	reverse();


}
void reverse()
{
   char c;
	scanf("%c", &c);
	if(c!='\n')
	{
		reverse();
		printf("%c",c); // Print the characters in reverse order

	}

}
