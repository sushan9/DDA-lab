#include<stdbool.h>
#include "sort_helpers.h"



void bubbleSort(int A[],int n)
{
    int switched=true,temp;

    for(int pass=0;pass<n-1 &&switched;pass++)
    {
        switched=false;

        for(int i=0;i<n-1-pass;i++)
        {
            if(A[i]>A[i+1])
            {
                switched=true;
                swap(&A[i],&A[i+1]);
            }
        }
    }
}
int main()
{
    int A[100],n;
    displayTitle("Bubble Sort");
    printf("enter number of items to sort:");
    scanf("%d",&n);
    getSortableArray(A,n);

    bubbleSort(A,n);
    displaySortedItems(A,n);
    return 0;
}

