#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // 1
  int arr[10];

  // 2
  arr[0] = 0;

  // 3
  srand(time(NULL));
  for (int i = 0; i < 10; i ++) arr[i] = rand();

  // 4
  for (int i = 0; i < 10; i ++) printf("%d ", arr[i]);
  printf("\n");

  return 0;

}
