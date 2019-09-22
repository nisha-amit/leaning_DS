#include<stdio.h>
#include<stdlib.h>

int main() {
  char x = '7';
  if(x >= '0' && x <= '9')
    printf("hola\n" );
  printf("%d\n", atoi(&x));
}
