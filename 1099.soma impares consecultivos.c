#include<stdio.h>
int main() {
int n, min, max, n1, n2, count=0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    scanf("%d %d", &n1, &n2);
    if(n1<n2){
      min = n1;
      max = n2;
    }else {
      min = n2;
      max = n1;
    }
    min++;
    for( min; min<max; min++){
      if(min%2!=0){
        count += min;
      }
    }
    printf("%d\n", count);
    count = 0;
  }
}
