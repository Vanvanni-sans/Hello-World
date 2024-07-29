#include<stdio.h>
int main() {
short h1, m1, h2, m2, des;
for(int i=0; i<1;){
  scanf("%hd %hd %hd %hd", &h1, &m1, &h2, &m2);
  if (!(h1 || m1 || h2 || m2)){
    i++;
}else{
    m1 += h1 * 60;
    m2 += h2 * 60;
    if(m1<m2){
      des = m2 - m1;
    }else{
      des = m2 + 1440 - m1;
    }
    printf("%hd\n", des);
}
}
}
