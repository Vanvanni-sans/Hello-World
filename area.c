#include <stdio.h> 
int main() {
     double a, b, c;
     double tri, cir, tra, qua, ret;
     scanf("%lf %lf %lf", &a, &b, &c);
          tri = (a * c)/2;
          cir = (c * c) *  3.14159;
          tra = ((a + b) * c) / 2;
          qua = b * b;
          ret = a * b; 
     printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, cir, tra, qua, ret);
     return 0;
}
