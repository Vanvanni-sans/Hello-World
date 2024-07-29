#include<stdio.h>
int main() {
int x, y, min, max,count=0;
  for(int j = 0; j<1;)
    {
      scanf("%d %d", &x, &y);
      if(x<=0 || y<=0){
        j++;
      }
      else {
  if(x<y)
  {
    min=x;
    max=y;
  }
  else
    {
      min=y;
      max=x;
    }
  for (int i = min; i <= max; i++){
  printf("%d ", i);   
    count += i;
  }
  printf("Sum=%d\n", count);
        count=0;
    }
    }
  return 0;
}
