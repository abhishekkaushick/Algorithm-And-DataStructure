#include<stdio.h>
Fixed_point(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		
		if(array[i]==i)
		{
			printf("%d",i);
		}
	}
}

int main()
{
	int array[]={-10,-1,0,3,10,11,30,50,100};
	int size=sizeof(array)/sizeof(array[0]);
	Fixed_point(array,size);
}
