#include "sort_helpers.h"



void insertionSort(int A[],int n)
{
    int j,key;
    for(int i=1;i<n;i++)
    {
        key=A[i];

        for(j=i-1;j>=0 && key <A[j];j--)
        {
            A[j+1]=A[j];
        }
        A[j+1]=key;
    }
}
int main()
{
    int A[100],n;
    displayTitle("Insertion Sort");
    printf("enter number of items to sort: ");
    scanf("%d",&n);
    getSortableArray(A,n);

    insertionSort(A,n);
    displaySortedItems(A,n);
    return 0;
}

