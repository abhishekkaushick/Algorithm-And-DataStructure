//distance between two number. complexity is n*n

#include<stdio.h>
Minimum_distnace(int array[],int m,int x,int y)
{
	int min_distance=99,current_min=0;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=1;j<m;j++)
		{
			if(array[i]==x && array[j]==y || array[i]==y && array[j]==x)
			{
				if(i>j)
				{
					current_min=i-j;
				}
				else
				{
					current_min=j-i;
				}
			}
			if(min_distance>current_min)
			{
				min_distance=current_min;
			}
		
		}
	}
	printf("%d",current_min);
}


int main()
{
	int array[]={3,5,4,2,6,5,6,6,5,4,8,3};
	int x=3;
	int y=6;
	int
	 m=sizeof(array)/sizeof(array[0]);
	Minimum_distnace(array,m,x,y);
}
