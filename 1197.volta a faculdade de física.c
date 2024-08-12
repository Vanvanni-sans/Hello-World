#include <stdio.h>
int main(){
  int v, t, saida;
  while(scanf("%d%d", &v, &t) != EOF) {
  saida = v * (t * 2);
    printf("%d\n", saida);
}
}
