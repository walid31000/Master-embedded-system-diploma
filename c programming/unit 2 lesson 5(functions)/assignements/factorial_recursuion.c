/*
 * factorial_recursuion.c
 *description:program to calculate factorial using recursion
 *  Created on: 6 Jan 2024
 *      Author: walid
 */

#include<stdio.h>
int fact(int num);
int main()
{
 int num,factorial;
 printf("enter a number \n ");
 fflush(stdout);fflush(stdin);
 scanf("%d",&num);
 factorial=fact(num);
 printf("factorial of %d=%d",num,factorial);


}
int fact(int num)
{
	if((num==0)||(num==1))
	{
		return 1;
	}
	else
	{
	return num*fact(num-1);
	}
}
