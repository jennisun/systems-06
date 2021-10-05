#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // 1
  int a[10];

  // 2
  a[0] = 0;

  // 3
  srand(time(NULL));
  int i;
  a[0] = 0;
  for (i = 1; i < 10; i ++) a[i] = rand();

  // 4
  for (int i = 0; i < 10; i ++) printf("%d ", a[i]);
  printf("\n\n");

  // 5
  int b[10];

  // 6
  int *ap = a;
  int *bp = b;

  // 7
  i = 9;
  for (i = 9; i >= 0; i --) {
    *(bp + i) = *(ap - 9 - i);
    bp[i] = ap[9 - i];
  }
  for (int i = 0; i < 10; i ++) printf("%d ", b[i]);
  printf("\n\n");

  return 0;
}
