#include <stdio.h>

int main(){
     int seg, min, hora;
     scanf("%d", &seg);
     hora = seg / 3600;
     seg %=3600;
     min = seg / 60;
     seg %=60;
     printf("%d:%d:%d\n", hora, min, seg);
     return 0;
}
