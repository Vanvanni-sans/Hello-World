#include<stdio.h>
int main() {
  int k=7;
  for (int i = 1;i<=9;i+=2)
    {
      for(int j=0; j<3; j++)
        {
      printf("I=%d J=%d\n", i, k);
          k--;
        }
      k+=5;
    }
  return 0;
}
