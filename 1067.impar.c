#include <stdio.h>
int main() {

  int a;
  scanf("%d", &a);
  for (int i = 0; i < 6;i++) {
    if (a % 2 == 0) {
      a += 1;
      printf("%d\n", a);
      a += 2;
    } else if (a % 2 != 0) {
      printf("%d\n", a);
      a+=2;
    }
  }
}
