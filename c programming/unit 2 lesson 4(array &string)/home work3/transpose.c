/*
 * transpose.c
 *description:c program to find transpose of a matrix
 *  Created on: 29 Dec 2023
 *      Author: walid
 */
#include<stdio.h>
int main()
{
	int row,col,i,j;
	int mat[10][10];
	int trans[10][10];
	printf("enter number of rows and columns of the matrix\n");
	fflush(stdout);fflush(stdin);
	scanf("%d%d",&row,&col);
	printf("enter elements of the matrix\n");
	// Input the elements of the matrix
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter element a%d%d  ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&mat[i][j]);
		}
	}
	//Display the matrix
	printf("entered matrix \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
	printf("transpose of matrix \n");
	// Calculate the transpose
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			trans[j][i]=mat[i][j];
		}

	}

	//Transpose matrix will have flipped dimensions
	// Display the transpose matrix
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d  ",trans[i][j]);
		}
		printf("\n");
	}

}

