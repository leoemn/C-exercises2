/*Write a C program to merge two sorted arrays into a single sorted array.*/

#include<stdio.h>
#include<stdlib.h>

//Function prototype.
void MergedSortedArray(int arr1[], int length1, int arr2[], int length2, int MergedArray[],  int length);

int main(void)
{
    int arr1[] = {4,8,15,25};
    int arr2[] = {1,5,6,20};

    //Calculate length of arrays.
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);

    //Calculate lengrh of merged arrays.
    int length = length1 + length2;
    
    //Allocate memory for the merged array.
    int *MergedArray = malloc(length * sizeof(int));

    MergedSortedArray(arr1, length1, arr2, length2, MergedArray, length);

    for (int i = 0 ; i < length ; i++)
    {
        printf("%d ",MergedArray[i]);
    }

    //Free Allocated memory
    free(MergedArray);
}

void MergedSortedArray(int arr1[], int length1, int arr2[], int length2, int MergedArray[],  int length)
{
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int *ptr3 = MergedArray;

    while (ptr1 < arr1 + length1 && ptr2 < arr2 + length2)
    {
        if (*ptr1 < *ptr2)
        {
            *ptr3 = *ptr1;
            ptr1++;
        }
        else
        {
            *ptr3 = *ptr2;
            ptr2++;
        }
        ptr3++;
    }

    while (ptr1 < arr1 + length1)
    {
        *ptr3 = *ptr1;
        ptr1++;
        ptr3++;
    }

    while (ptr2 < arr2 + length2)
    {
        *ptr3 = *ptr2;
        ptr2++;
        ptr3++;
    }   
}