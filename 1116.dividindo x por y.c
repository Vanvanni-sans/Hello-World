#include<stdio.h>
int main() {
int x, n1, n2;
  float div;
  scanf("%d", &x);
  for(int i = 0; i<x; i++){
  scanf("%d %d", &n1, &n2);
    if (n2==0)
      printf("divisao impossivel\n");
    else{
  div =(float)n1/n2;
  printf("%.1f\n", div);
  }
  }
}
