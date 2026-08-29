#include<stdio.h>

int main()
{
	int n,arr[100],i,j,ctr=0;
	
	printf("Enter the number of elements:");
	scanf("%d,&n");
	
	printf("\n Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		printf("\n The values %d ->",i);
		scanf("\n %d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				ctr++;
				break;
			}
		}
	}
	
	printf("The duplicate element count is: %d",ctr);
}
}
