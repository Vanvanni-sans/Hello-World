#include <stdio.h>
int main() {
  int n, count = 0;
  for (int i = 0; i < 1;) {
    scanf("%d", &n);
    if (n != 0) {
      if (n % 2 != 0)
        n++;
      for (int j = 0; j < 5; j++) {
        count += n;
        n += 2;
      }
      printf("%d\n", count);
      count = 0;
    } else
      i++;
  }
  return 0;
}
