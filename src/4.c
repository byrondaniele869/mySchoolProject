#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int age = 25;
  char name[30];
  printf("Please enter your name: ");
  scanf("%s", &name);
  printf("Hello, %s! You are %d years old.\n", name, age);
  return 0;
}
