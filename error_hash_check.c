#include<stdio.h>
#define ABC_DEF
#ifndef ABC_DEF
  #error some_error
#endif
int main() {
  printf("hello from main");
  return 0;
}
