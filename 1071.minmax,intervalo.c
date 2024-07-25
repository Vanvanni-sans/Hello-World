#include <stdio.h>   
int main(){
  int n1, n2, som1=0;
  int min, max;
  scanf("%d %d", &n1, &n2);
  if (n1 < n2){
    min = n1;
    max = n2;
  }
  else {
    min = n2;
    max = n1;
  }
      for (int i = (min+1); i < max; i++){
        if(i%2!=0){
            som1+=i;
          }
        }
  printf("%d\n", som1);
  return 0;
}
