#include <stdio.h>

int main(void) {
  int a=1,i =4;
  while(i>0){
    a = a*i;
    i--;
  }
  printf("%d",a);
  return 0;
}