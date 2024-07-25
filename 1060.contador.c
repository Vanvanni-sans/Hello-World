#include <stdio.h> 
int main(){
  float num;
  short quan;
  quan = 0;
  for(int i = 1; i <= 6; i++)
    {
    scanf("%f", &num);
    if (num > 0)
      quan ++;
    }
  printf("%hd valores positivos\n", quan);
  return 0;
}
