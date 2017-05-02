#include <stdio.h>
 int contigious(int array[],int size) 
 {
  int sum=0,largest_sum=0;
  int i,j;
	for(i=0;i<size;i++)
	{ 
		for(j=i;j<size;j++)
		{
	   sum=sum+array[j]; 
	   		if(sum>largest_sum) 
	   		{
			  largest_sum=sum;
			}
		} 
		sum=0;
	}
		printf("%d ",largest_sum);
  }
	 int main()
	 {
	 int array[]={-1,4,-5,-7,-8,-9,-4};
	 int size=sizeof(array)/sizeof(array[0]);
	 contigious(array,size);
	 getchar(); 
	 return 0;
	 }
