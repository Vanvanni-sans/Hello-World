#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
  char linha [401];
  while(scanf("%s", linha) && (linha [0] != '-')){
    if (linha[1]=='x' || linha[1]=='X'){
      printf("%lu\n", strtoul(linha, NULL, 0));
    }else{
    printf("0x%lX\n", strtoul(linha, NULL, 0));
    }  
  }
  return 0;
}
