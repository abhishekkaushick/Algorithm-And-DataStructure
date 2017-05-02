//Intersection of two array...
#include<stdio.h>
int printintersection(int array1[],int array2[],int m,int n)
{
 	int i=0,j=0;
 	while(i<m && j<n)
	{
		
		if(array1[i]==array2[j])
		{
			printf("%d ",array1[i]);
			i++;
			j++;
		}
		else if(array1[i]>array2[j])
		{
			j++;
		}
		else
		{
		
			i++;
		}
	}
}

int main()
{
int array1[]={1,2,3,4,5,6};
int array2[]={2,3,5,7};
//size of array
int m=sizeof(array1)/sizeof(array1[0]);	
int n=sizeof(array2)/sizeof(array2[0]);
printintersection(array1,array2,m,n);
getchar();
return 0;	
}


