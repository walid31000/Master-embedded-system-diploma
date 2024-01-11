/*
 * swap_array.c
 *description:c program for swapping two array with different length
 *  Created on: 10 Jan 2024
 *      Author: walid
 */


#include<stdio.h>

void print_array(int arr[],int size);
int main()
{
	int i;
	int a[10],b[10],temp[10];
	printf("enter the first array \n");
	fflush(stdout);
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);//take arrays value from user
	}
	printf("enter the second array \n");
	fflush(stdout);
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);//take arrays value from user
	}
	printf("arrays before swapping swapping \n");
	printf("first array-->  ");
	print_array(a,10);
	printf("\nsecond array-->   ");
	print_array(b,5);

/*swapping the two arrays using temp array*/
	for(i=0;i<10;i++)
	{
		temp[i]=a[i];
		a[i]=b[i];
		b[i]=temp[i];
    }
/*display arrays after swapping */
    printf("\narrays after swapping \n");
	printf("first array-->  ");
	print_array(a,5);
	printf("\nsecond array-->  ");
	print_array(b,10);

    return 0;
}
/*function to print arrays */
void print_array(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
}
