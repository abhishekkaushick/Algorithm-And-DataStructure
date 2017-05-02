//Majority element with time complexity N

#include<stdio.h>
Majority(int array[],int size)
{
	int i,count=1;
	int candidate=array[0];
	for(i=0;i<size;i++)
	{
		if(count==0)
		{
			candidate=array[i];
		}		
		
		if(candidate==array[i])
		{
			count++;
		}
		else
		{
			count--;
		}
	
			
	}

	count=0;
	for(i=0;i<size;i++)
	{
		if(array[i]==candidate)
		{
			count++;
		}
	}

	if(count>size/2)
	{
		printf("%d",candidate);
	}
	else
	{
		printf("None");
	}


}

int main()
{
	int array[]={3,3,4,2,4,4,2,4};
	int size=sizeof(array)/sizeof(array[0]);
	Majority(array,size);
}
