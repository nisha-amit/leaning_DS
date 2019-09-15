#include<iostream>
#include<string.h>
using namespace std;

int findNextMin(int arr[3][3], int i, int curMin){
  int min = INT_MAX ;
  int minColumn = 0;
  cout << "i:" << i << " curMin:" << curMin << "\n";
  for(int j=0; j<3; j++){
    if(arr[i][j] > curMin && min > arr[i][j]){
      min = arr[i][j];
      minColumn = j+1;
    }
  }
  return minColumn;
}
int main(){
  int i,j;
  int arr[3][3] = {{1,2,2}, {2,6,3}, {3,3,1}};
  int r=3,c=3;
  int s=0, min;
  int minColumn[3] = {};
  for(i=0;i<r;i++){
    min = INT_MAX;
    for(j=0;j<c;j++){
      if(arr[i][j]<min){
        min = arr[i][j];
        minColumn[i] = j+1;
      }
    } //to get the minimum column
    if(i>0 && (minColumn[i] == minColumn[i-1])) {
      minColumn[i] = findNextMin(arr, i, arr[i][minColumn[i]-1]);
      // cout << "NextMin column for " << minColumn[i] << "\n";
    }
    cout << "Min column for " << minColumn[i] << "\n";
    s += (arr[i][minColumn[i] - 1]);
  }
  cout << "\nvalue" << s << "\n";
  return 1;
}
