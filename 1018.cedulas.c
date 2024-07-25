#include <stdio.h>

int main(){
     int din, a;
     scanf("%d", &din);
     printf("%d\n", din);
     a = din / 100;
     printf("%d nota(s) de R$ 100,00\n", a);
     din%=100;
     a = din / 50;
     printf("%d nota(s) de R$ 50,00\n", a);
     din%=50;
     a = din / 20;
     printf("%d nota(s) de R$ 20,00\n", a);
     din%=20;
     a = din / 10;
     printf("%d nota(s) de R$ 10,00\n", a);
     din%=10;
     a = din / 5;
     printf("%d nota(s) de R$ 5,00\n", a);
     din%=5;
     a = din / 2;
     printf("%d nota(s) de R$ 2,00\n", a);
     din%=2;
     a = din;
     printf("%d nota(s) de R$ 1,00\n", a);
     return 0;
}
