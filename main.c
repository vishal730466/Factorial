#include <stdio.h>

int main(void) {
  int a=1,i;
  
  printf("enter any number ");
  scanf("%d",&i);
  
  while(i>0){
    a = a*i;
    i--;
  }
  printf("%d",a);
  return 0;
}