#include<stdio.h>
int arr [8];
int getSum(int n, int arr[]){
  if(n < 0)
    return 0;
  if(n==0)
    return 1;
  if(arr[n] != 0){
    return (arr[n-1] + arr[n-2] + arr[n-3]);
  }
  arr[n] = getSum(n-1, arr) + getSum(n-2, arr) + getSum(n-3, arr);
  return arr[n];
}

int main() {
  int i;
  for(i=0;i<5;i++)
    arr[i] = 0;
  arr[0] = 1;
  printf("out:: %d\n", getSum(7, arr));
  for(i=0;i<8;i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 1;
}
