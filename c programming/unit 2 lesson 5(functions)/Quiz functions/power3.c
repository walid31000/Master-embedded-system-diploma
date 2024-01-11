/*
 * power3.c
 *description: c program to check if a number is power of 3 or not
 *  Created on: 10 Jan 2024
 *      Author: walid
 */
#include <stdio.h>
int checkpower3(int num);
int main()
{
	int number;
	printf("enter a number \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	if(checkpower3(number))

	{
		printf("%d is power of 3",number);
	}
	else
	{
		printf("%d is not power of 3",number);
	}

}
int checkpower3(int num)
{

	while(num%3==0)
	{
		num/=3;//keep dividing by 3 until it becomes 1
	}
	return num==1;
}
