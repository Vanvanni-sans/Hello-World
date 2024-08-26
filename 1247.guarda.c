#include <stdio.h>
#include <math.h>
int main(){
int d;//cateto/distacia 
  //2° cateto é 12
  int vg, vf;// velocidade da guarda e do fugitivo 
  float hip;//distancia percorrida pela guarda
  while(scanf("%d %d %d", &d, &vf, &vg) != EOF)
    {
      //calc dist guarda
      hip = hypot(12, d);
      //verificar se a guarda alcança o fugitivo
      printf(((hip/vg) <= ((float)12/vf))?"S\n": "N\n");
    }
return 0;
}
