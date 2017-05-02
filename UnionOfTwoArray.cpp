//Union of two array..
#include<stdio.h>
int printunion(int array1[],int array2[],int m,int n)
{
int i=0,j=0;
//Compairing element form array1 and array2...
	while(i<m && j<n)
	  {
	  if(array1[i] >array2[j])
		{
		printf("%d ",array2[j]);
		j++;
		}
		else if(array1[i]<array2[j])
		{
			printf("%d ",array1[i]);
			i++;
			}	
		else
		//if element are equal..
		{
		printf("%d ",array1[i]);
		i++;
		j++;
		}
	}
	//remaining element print directly...
	while(i<m)
	{
		printf("%d ",array1[i]);
		i++;
		}	
	while(j<n)
	{
	 
		printf("%d ",array2[j]);
		j++;
	 
	}
}

//
int main()
{
int array1[]={1,2,3,4,5,6};
int array2[]={2,3,5,7};
//size of array
int m=sizeof(array1)/sizeof(array1[0]);	
int n=sizeof(array2)/sizeof(array2[0]);
printunion(array1,array2,m,n);
getchar();
return 0;	
}
