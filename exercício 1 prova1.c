//ex1
// emanuel e giovanni
#include <stdio.h>

int main() {
    int f,c,e,b,sum,voo;
    float sum2;
    int filas;
    int sum3;

    scanf("%d %d %d %d",&f,&c,&e,&b);
    sum = (((f+1)-e)*c);//definir se ele conssegue entrar no voo
    sum2=(b/c);//quantas fileiras ele passa
    sum3=(b%c);//o número de letras que ele vai passar
    filas=(sum3!=0)? sum2+e : sum2+e-1;//a fileira vai estar
    char letra;
    letra =(sum3!=0) ? 'A'+(sum3-1) : 'A'+ c - 1;//a posição que ele vai estar

    voo = (sum<b)? printf("PROXIMO VOO") : printf("%d %c",filas, letra);

    return 0;
}