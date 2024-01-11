/*
 * ascii_to_integer.c
 *description:this program convert a decimal number stored as an ascii
 *array to an unsigned integer
 *  Created on: 8 Jan 2024
 *      Author: walid
 */

#include<stdio.h>
unsigned int asci_to_integr(char[]);
int main()
{
	char arr_character[]="1025";
	int number=asci_to_integr(arr_character);

	printf("after conversion the number is :%u",number);

}
unsigned int asci_to_integr(char asci[])
{
	int i;
	int result=0;// Initialize result
	for(i=0;asci[i]!='\0';i++)
	{
		// Convert character to digit and accumulate
		result=result*10+(asci[i]-'0');
	}
	return result;
}
