//Minimum distnace of array with time time complexity N.......
#include<stdio.h>
Minimum_distnace(int array[],int m,int x,int y)
{
	int i,j,minm=99,current_min=100;
	j=m-1;
	while(j!=0)
	{
		if(array[j]==x || array[j]==x)
		{
			break;
		}
		j--;
	}
  
	for(int i=0;i<=j;i++)
	{
		if(array[i]==x && array[j]==y || array[i]==y && array[j]==x)
		{
		
			 	current_min=j-i;
			 	
		}
		
		if(minm>current_min)
		{
			minm=current_min;
		}
		
	}
	printf("%d",minm);
}

int main()
{
	int array[]={3,5,4,2,6,5,6,6,5,4,8,3,0,0};
	int x=3;
	int y=6;
	int m=sizeof(array)/sizeof(array[0]);
	Minimum_distnace(array,m,x,y);
}
