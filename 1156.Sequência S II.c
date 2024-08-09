#include <stdio.h>

int main() {
 float s = 1, x[20], num = 3, den = 2;
  for(int i = 0; i < 19; i++)
  {
    x[i]=num/den;
    num+=2;
    den*=2;
  }
  for(int i = 0; i < 19; i++){
    s+=x[i];
  }
  printf("%.2f\n",s);
}
