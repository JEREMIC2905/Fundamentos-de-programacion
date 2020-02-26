#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c;
    char opt;
    printf("a.-suma\nb.-resta\nc.-mutiplicacion\nd.-division\n");
    printf("introduce el primer valor: ");
    opt=getchar();
    printf("introduce el primer comando: ");
    scanf("%f",&a);
    printf("introduce el segundo comando: ");
    scanf("%f",&b);
    switch (opt){
case 'A':
case 'a':
    c=a+b;
    break;
case 'B':
case 'b':
    c=a-b;
    break;
case 'C':
case 'c':
    c=a*b;
    break;
case 'D':
case 'd':
    while (b==0){
        printf("error,el segundo comando no puede ser 0");
        printf("introduce el segundo comando: ");
        scanf("%f",&b);
    }
        c=a/b;
        break;
default:
    printf("error,operacion invalida");
    opt=='R';
    }
    if(opt!='R'){
        printf("el resultado es %0.2f",&c);
    }
}
