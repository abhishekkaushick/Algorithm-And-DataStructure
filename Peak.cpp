//Peak element with time complexity....
#include<stdio.h>
Peak(int array[],int size)
{
	int low=0,high=size-1,mid,i;
	for(int i=0;i<=size;i++)
	{
			mid=(low+high)/2;
		if(array[mid]>=array[mid+1] && array[mid]>=array[mid-1])
		{
			
			printf("%d",array[mid]);
			break;
		}
		else if(array[mid]<array[mid-1])
		{
			high=mid;
		}
		else if(i==size-1)
		{
			if(array[size-2]<array[size-1])
			{
				printf("%d",array[size-1]);
				break;
			}
		}
		
		else
		{
			low=mid;
			
		}	
		
	
		
	}
}


int main()
{
	int array[]={10,11,12,13,14,15,16};
	int size=sizeof(array)/sizeof(array[0]);
	Peak(array,size);
}

