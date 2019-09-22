#include<stdio.h>
#include<string.h>

using namespace std;

int findNextMin(int arr[], int i, int curMin){
  int min = arr[0];
  for(int j=0; j<sizeof(arr); j++){
    if(min > arr[j] && min > curMin){
      min = arr[j];
    }
  }
  return min;
}
int main(){
  int i,j;
  int arr[3][] = {{1,2,2}, {2,3,3}, {3,3,1}};
  int r=3,c=3;
  int s=0, min;
  int minColumn[3] = {};
  for(i=0;i<r;i++){
    min = arr[i][0];
    for(j=0;j<c;j++){
      if(arr[j]<min){
        min = arr[j];
        minColumn[i] = j+1;
      }
    } //to get the minimum column
    if(i>0 && (minColumn[i] == minColumn[i-1]){
      minColumn[i] = findNextMin(arr[i], i, minColumn[i]);
    }
    s += minColumn[i];
  }
  cout << "value" << s << "\n";
  return 1;
}
