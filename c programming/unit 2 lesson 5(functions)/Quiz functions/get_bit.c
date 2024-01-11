/*
 * get_bit.c
 *description:a function that take a number and bit number and return the value of this bit(0 oR 1)
 *  Created on: 10 Jan 2024
 *      Author: walid
 */

#include<stdio.h>
int get_bit(int num,int bit_num);
int main()
{
	int number,bit_number;
	printf("enter an number");
	fflush(stdout);
	scanf("%d",&number);
	printf("enter a bit number");
		fflush(stdout);
		scanf("%d",&bit_number);
	int result=get_bit(number,bit_number);
	printf("this bit value is %d:",result);
}
int get_bit(int num,int bit_num)
{
	return ((num>>bit_num)&1);
}
