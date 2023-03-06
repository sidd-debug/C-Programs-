#include<stdio.h>

void bubbleSort(int a[],int n)
{
    int i, j,temp=0;
	for(i = 0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            
        
           }
       }
   } 
}

void main()
{
  int arr[] = {4,9,7,8,6,5};
  int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
    for(int i =0; i<n; i++)
    {
        printf("%d",arr[i]);
    }

}
