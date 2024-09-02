#include <stdio.h>

 typedef struct{
     int num; //numerador
     int den; // denominador
 } racional;

    //==================================
    //funçoes sobre o tipo racional
    //==================================
    
 void scanrac(racional *r) {
     scanf("%d / %d", &r->num, &r->den);
 }
 void printrac(racional r) {
     printf("%d / %d", r.num, r.den);
 }
racional addrac(racional a, racional b){
    racional res;
    res.num = a.num*b.den + a.den*b.num;
    res.den = a.den*b.den;
    return res;
}
racional subrac(racional a, racional b){
    racional res;
    res.num = a.num*b.den - a.den*b.num;
    res.den = a.den*b.den;
    return res;
}
racional multrac(racional a, racional b){
    racional res;
    res.num = a.num*b.num;
    res.den = a.den*b.den;
    return res;
}
racional divrac(racional a, racional b){
    racional res;
    res.num = a.num*b.den;
    res.den = a.den*b.num;
    return res;
}
racional simplifica(racional a){
    racional res;
    int MDC = mdc(a.num,a.den);
    res.num =a.num/MDC;
    res.den =a.den/MDC;
    if(res.den <0){
        res.num *= -1;
        res.den *= -1;
    }
    return res;
}

int mdc(int n, int d) {
    int r; //resto da div

    while (d !=0){
        r=n%d;
        n = d;
        d=r;
    }
    return n;
}
int main() {
    int n;
    racional a, b, resultado;
    char sin;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\n");
        scanrac(&a);
        scanf(" %c", &sin);
        scanrac(&b);
        
        switch (sin) {
            case '+':
                resultado = addrac(a, b);
                printrac(resultado);
                printf(" = ");
                resultado = simplifica(resultado);
                printrac(resultado);

                break;
            case '-':
                resultado = subrac(a, b);
                printrac(resultado);
                printf(" = ");
                resultado = simplifica(resultado);
                printrac(resultado);
                break;
            case '*':
                resultado = multrac(a, b);
                printrac(resultado);
                printf(" = ");
                resultado = simplifica(resultado);
                printrac(resultado);
                break;
            case '/':
                resultado = divrac(a, b);
                printrac(resultado);
                printf(" = ");
                resultado = simplifica(resultado);
                printrac(resultado);   
                break;
        }
    }

    return 0;
}
