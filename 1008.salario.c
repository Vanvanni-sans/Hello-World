#include<stdio.h>

int main() {
  int a, b;
  float c, d;
  printf("digite seu número da empresa:\n");
  scanf("%d", &a);
  printf("quantas horas você trabalha?\n");
  scanf("%d", &b);
  printf("quanto você ganha por hora?\n");
  scanf("%f", &c);

  d = c * b;

  printf("NUMER = %d\n", a);
  printf("SALARY = U$ %.2f\n", d);
  

return 0; 
}
