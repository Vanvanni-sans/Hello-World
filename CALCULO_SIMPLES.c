#include <stdio.h>

int main(){
     int a1, b1, a2, b2;
     float c1, c2, val;
     scanf("%d %d %f %d %d %f", &a1, &b1, &c1, &a2, &b2, &c2);
          c1 *= b1;
          c2 *=b2; 
          val = c1 + c2;
     printf("VALOR A PAGAR: R$ %.2f\n", val);
     return 0;
}
