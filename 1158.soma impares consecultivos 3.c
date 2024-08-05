#include <stdio.h>
int main() {
  int n, n1, n2, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &n1, &n2);
    if (n1 % 2 != 0) {
      for (int j = 0; j < n2; j++) {
        count += n1;
        n1 += 2;
      }
    } else if (n1 % 2 == 0) {
      n1++;
      for (int j = 0; j < n2; j++) {
        count += n1;
        n1 += 2;
      }
    }
    printf("%d\n", count);
    count = 0;
  }
  return 0;
}
