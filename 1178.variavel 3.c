#include <stdio.h>

int main() {
  int x=1;
  double n[100];
  scanf("%lf", &n[0]);
  for (int i=1; i<100; i++){
    n[i]=n[i-1]/2;
  }
  for (int j=0; j<100; j++){
    printf("N[%d] = %.4lf\n", j, n[j]);
}
}
