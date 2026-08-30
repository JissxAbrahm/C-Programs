#include<stdio.h>

int main()
{
	int arr1[100],i,j,k,n,ctr=0;
	
	printf("\n\nPrint all unique elements of an array:\n");
    printf("------------------------------------------\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
	printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);  
    }
    
    printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < n; i++)
    {
        ctr = 0;  
        for (j=0;j<n; j++)
        {
		    if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 0)
        {
            printf("%d ", arr1[i]);  
        }
    }
    printf("\n\n");
    return 0;  
}
    

