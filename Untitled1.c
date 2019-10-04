#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
int a;
float b,c,d;
char r;

do{

        do{
        printf("Elija una opcion\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Salir\n\n");
        scanf("%d",&a);
        }while(a<0 && a>5);
    if(a<5 && a>0){
        do{
        printf("\n\nIngrese dos numeros para efectuar la operacion:\n");
        if(a==4){
        printf("El segundo numero diferente de cero\n\n");
        }
        scanf("%f%f",&b,&c);
        }while(c==0);

        switch(a){

            case 1:
            d=b+c;
            break;

            case 2:
            d=b-c;
            break;

            case 3:
            d=b*c;
            break;

            case 4:
            d=b/c;
            break;
        }

    printf("\n\nEl resultado de la operacion es: %.3f\n\n",d);
    printf("Desea hacer otra operacion\ns / n\n\n");
    r=getch();
    printf("\n\n\n");

    }

}while(r == 's' || r == 'S');

}
