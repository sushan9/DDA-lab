#include <stdio.h>
#include <stdlib.h>

void displayTitle(char title[])
{
  system("clear");
  for (int i = 0; i < 7; i++)
    printf("*");
  printf(" %s ", title);
  for (int i = 0; i < 7; i++)
    printf("*");
  printf("\n\n");
}

void getSortableArray(int Array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Item %d : ", i);
    scanf("%d", &Array[i]);
  }
}

void displaySortedItems(int Array[], int n)
{
  printf("\nSorted Items:\t");
  for (int i = 0; i < n; i++)
    printf("%d \t", Array[i]);
  printf("\n\n");
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}