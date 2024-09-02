#include <stdio.h>
#include <math.h>

int f1(int x, int y){
    return powl(x + y, 2);
}

 int main(){
    int x, y, z;
    while (scanf("%d %d",&x,&y) != EOF){
        z=f1(x, y);
        printf("f1(%d %d) = %d\n", x, y, z);
    }
    return 0;
}
