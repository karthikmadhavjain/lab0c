#include <stdio.h>

int main(void) {
  char name [40];
  printf("Enter your name: ");
  scanf("%s",name);
  printf("\nHello, %s!\n",name);
}