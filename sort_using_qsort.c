#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}

// Driver program to test above function
int main()
{
    int arr[] = {4,13,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x[size];
    int i=0, j=0;
    int diff = 999;
    for(i=0; i<size; i++)
      x[i] = 1;

    qsort((void*)arr, size, sizeof(arr[0]), cmpfunc);
    i=0;
    while(i < (size-1)){
      diff = arr[i+1] - arr[i];
      if(diff == 1 || diff == 0)
        x[j] += 1;
      else{
        j++;
        // x[j] = 1;
      }
      i++;
    }
    printf("J value%d\n",j);

    printf("Output array is\n");
    printArr(arr, size);
    printf("\nOutput 2 \n");
    for(i=0;i<=j;i++){
      printf("%d", x[i]);
    }
    printf("\n");

    return 0;
}
