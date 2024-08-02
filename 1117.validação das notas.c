#include<stdio.h>
int main() {
  float nota, count=0;
  for(int i=0; i<2;){
    scanf("%f", &nota);
    if(nota<0 || nota>10)
      printf("nota invalida\n");
    else{
      count+=nota;
      i++;
    }
  }
  printf("media = %.2f\n", count/2);
}
