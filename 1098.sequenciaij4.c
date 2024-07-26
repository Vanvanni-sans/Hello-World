#include<stdio.h>
int main() {
  float k=1;
  for (float i = 0;i<=2.2;i+=0.2)
    {
      for(int j=0; j<3; j++)
        {
          if ((int)(i*10)%10){
            printf("I=%.1f J=%.1f\n", i, k + i);
            k++;
          }else{
      printf("I=%.0f J=%.0f\n", i, k + i);
          k++;
          }
        }
      k-=3;
    }
  return 0;
}
