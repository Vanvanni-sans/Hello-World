#include <stdio.h>
int main(){
  long long x, y, saida, sub;
  for(; scanf("%lld%lld", &x, &y) != EOF; ) {
  if (x<y){
    sub=x;
    x=y;
    y=sub;
  }
    saida = x - y;
    printf("%lld\n", saida);
  }
  return 0;
}
