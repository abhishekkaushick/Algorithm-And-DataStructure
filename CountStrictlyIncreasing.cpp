#include<stdio.h>

CountStrictlyIncreasing(int array[],int size)
{
	int count=1,sum=0;
	for(int i=1;i<=size;i++)
	{
		//printf("count %d\n",i);
		if(array[i]>array[i-1])
		{
			count++;
		}
		else
		{
			if(count>1)
			{
			sum+=count*(count-1)/2;
			//printf("sum %d\n",sum);
			count=1;
			}
		
		}
		
	}
	printf("%d",sum);
}

int main()
{
	int array[]={10,20,30,40};
	int size=sizeof(array)/sizeof(array[0]);
	CountStrictlyIncreasing(array,size);
}
