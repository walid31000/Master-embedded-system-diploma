/*
 * get_bit.c
 *description:a function that clear a specific bit in a given number
 *  Created on: 10 Jan 2024
 *      Author: walid
 */

#include<stdio.h>
int clear_bit(int num,int bit_num);
int main()
{
	int number,bit_number;
	printf("enter an number  ");
	fflush(stdout);
	scanf("%d",&number);
	printf("enter a bit number to clear");
		fflush(stdout);
		scanf("%d",&bit_number);
		fflush(stdout);
	int result=clear_bit(number,bit_number);
	printf("result= %d ",result);
}
int clear_bit(int num,int bit_num)
{
	return (num&~(1<<bit_num));
}
