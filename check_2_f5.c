#include<stdio.h>
#define SWAP(a, b, c)(c t; t=a, a=b, b=t)
int main(){
  int x=50, y=100;
  SWAP(x, y, int);
  printf("%d, %d", x,y);
  return 0;
}
