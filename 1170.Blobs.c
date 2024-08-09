#include <stdio.h>

int main() {
 
  int n, count = 0;
  float c;
  
  scanf("%d", &n);
  for(int i = 0 ; i < n; i++){
    scanf("%f", &c);
    for(int j = 0; j < 1;)
      {
        c = c / 2;
        if(c<=1){
          j++;
        }
        count++;
      }
    printf("%d dias\n", count);
    count = 0;
  }
}
