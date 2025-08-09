#include<stdio.h>

void startMessage() {
  printf("Hello \n");
}

int main(int arg, char **args) {
  if(arg < 2) {
    startMessage();
    return 0;
  }
  else {
    printf("%c", args[1][0]);
  }
  
  return 0;
}
