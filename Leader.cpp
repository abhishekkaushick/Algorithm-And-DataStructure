//leader of the array...with time complexity N...
#include<stdio.h>
Leader(int array[],int m)
{
	int max=0;
	//printf("%d",m);
	int j;
	for(j=m-1;j>=0;j--)
	{
		
		if(max<array[j])
		{
			//printf("max= %d",max);
			printf("%d ",array[j]);
			max=array[j];
		}
			
	}
}

int main()
{
	int array[]={16,17,4,3,5,2};
	int m=sizeof(array)/sizeof(array[0]);
	Leader(array,m);
}
	
