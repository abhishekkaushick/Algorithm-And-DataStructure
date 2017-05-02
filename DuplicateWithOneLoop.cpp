//Duplicate with N time 
#include<stdio.h>
#include <stdlib.h>
Duplicate(int array[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(array[abs(array[i])]>0)
		{
			array[abs(array[i])]=-array[abs(array[i])];
		}
		else
		{
			printf("%d ",abs(array[i]));
		}
	}
}

int main()
{
	int array[]={1,2,3,1,3,6,6,6,6};
	int size=sizeof(array)/sizeof(array[0]);
	Duplicate(array,size);
	getchar();
	return 0;
	
}
