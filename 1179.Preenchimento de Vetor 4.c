#include <stdio.h>

int main() {
  
int n, impar[5] , par[5], countpar, countimpar;
  
  countpar = 0;
  countimpar = 0;
  
  for(int i=0; i < 15; i++){
    scanf("%d", &n);
    if(n%2!=0){
      impar[countimpar]=n;
      countimpar++;
      if(countimpar == 5){
        countimpar=0;
        for(int j = 0; j<5; j++){
          printf("impar[%d] = %d\n", j, impar[j]);
        }
      }
    }
    else
    {
      par[countpar]=n;
      countpar++;
      if(countpar == 5){
        countpar=0;
        for(int j = 0; j<5; j++){
          printf("par[%d] = %d\n", j, par[j]);
        }
    }
  }
}
  for(int k = 0; k<countimpar;k++){
    printf("impar[%d] = %d\n", k, impar[k]);
  }
  for(int k = 0; k<countpar;k++){
    printf("par[%d] = %d\n", k, par[k]);
  }
}
