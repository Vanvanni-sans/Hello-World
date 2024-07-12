#include <stdio.h>

int main(){
  float din, n, tax1, tax2, tax3;
  scanf("%f", &n);
  tax1 = 1.08;
  tax2 = 1.18;
  tax3 = 1.28;
  if (n <= 2000.00)
    printf("Isento\n");
    else
    if (n > 2000.00){
      din = n * tax1;
      printf("R$ %f\n", din);
      }else{
      if(n > 3000.00 && n <= 4500.00)
        din = din + ((n - 3000.00) * tax2);
        printf("R$ %.2f\n", din);
    else 
      printf("OI")
         
return 0;
}

