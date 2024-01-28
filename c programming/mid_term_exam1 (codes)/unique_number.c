/*
 * unique_number.c
 *description:c function to return unique number in array with one loop
 *  Created on: 24 Jan 2024
 *      Author: walid
 */


#include<stdio.h>
int unique_number(int arr[],int size);
int main()
{
	int a[100];
	int size,i,unique_output;
	printf("enter a size of your array \n");
	fflush(stdout);
	scanf("%d",&size);
	fflush(stdout);fflush(stdin);
	printf("enter your array elements \n");
	fflush(stdout);fflush(stdin);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	unique_output=unique_number(a,size);
	printf("the unique number is %d",unique_output);

}
int unique_number(int arr[],int size)
{
	int i,uniq=0;
	for(i=0;i<size;i++)
	{
		uniq=uniq^arr[i];
	}

	return uniq;
}
