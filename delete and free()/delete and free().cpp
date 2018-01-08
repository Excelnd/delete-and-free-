// delete and free().cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int x;
	int *ptr1 = &x;
	int *ptr2 = (int *)malloc(sizeof(int));
	int *ptr3 = new int;
	int *ptr4 = NULL;

	delete ptr3;
	delete ptr4;

	getchar();
	

    return 0;
}

