// Find missing Number....
#include<stdio.h>
int Missing(int array[],int size)
{
	int sum=0;
	int total=(size+2)*(size+1)/2;
	for(int i=0;i<size;i++)
	{
		sum=sum+array[i];
	}
	return(total-sum);
}

int main()
{
	int array[]={1,2,4,7,6,8,3};
	int size=sizeof(array)/sizeof(array[0]);
	int miss=Missing(array,size);
	printf("%d",miss);
	getchar();	
}
