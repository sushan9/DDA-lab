#include "sort_helpers.h"

void selectionSort(int A[],int n)
{
    int least,jMin;
    for(int i=0;i<n;i++)
    {
        least=A[i];
        jMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<least)
            {
                least=A[j];
                jMin=j;
            }
        }
        A[jMin]=A[i];
        A[i]=least;
    }
}
int main()
{
    int A[100],n;
    displayTitle("Selection Sort");
    printf("enter number of items to sort: ");
    scanf("%d",&n);
    getSortableArray(A,n);
    selectionSort(A,n);
    displaySortedItems(A,n);
    return 0;
}

