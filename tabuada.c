#include <stdio.h>
int main(){

  int a, b;
  scanf("%d", &a);
  for(int i = 1; i <= 10; i++)
    {
      b = i * a;
      printf("%d x %d = %d\n", i, a, b);
    }
}
