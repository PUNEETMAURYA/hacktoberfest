//1.BUBBLE SORT
//2.INSERTION SORT
//3.SELECTION SORT

#include<stdio.h>

int swap(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}

int sortBubble(int size, int A[])
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size-i-1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
            
        }
        
    }
}



#include <stdio.h>
int main()
{
    int A[] = {4, 6, 2, 8, 14, 11};
    int B[6] = {2,4,6,8};

    int size = sizeof(A) / sizeof(int);
    // printf("%d ",size);
    sortBubble(size, A);

    for(int i=0;i<size;i++){
         printf("%d ",A[i]);
    }

    printf("\n");

    return 0;
}