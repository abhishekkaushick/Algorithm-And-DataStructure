//Duplicate in the array...
#include<stdio.h>
Duplicate(int array[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(array[i]==array[j] && i!=j)
			{
				printf("%d ",array[i]);
			}
		}
	}
}

int main()
{
		int array[]={1,2,3,1,3,6,6,6,6};
	int size=sizeof(array)/sizeof(array[0]);
	Duplicate(array,size);
	
}
