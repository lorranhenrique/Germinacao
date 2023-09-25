#include <stdio.h>
#include <stdlib.h>
#define max 5

void CalcParar(int *germ){
    int somador=0,acima=0,c;

    for(c=0;c<max;c++){
        somador=somador+*(germ+c);
    }

    float media = (float)somador/max;

     for(int c=0;c<max;c++){
        if(*(germ+c)>media){
            acima++;
        }
    }
    int pacima=(acima*100)/max;

    c=0;
    while(c<max){
        printf("Grau da %da semente : %d\n",c+1,*(germ+c));
        c++;
    }

    printf("\nSOMATORIO:%d\nMEDIA:%f\nQUANTIDADE ACIMA:%d\nPORCENTAGEM ACIMA:%d\n",somador,media,acima,pacima);
}

int main(){
    int *germ=(int*)malloc(sizeof(int)*max);
    int c;

    for(c=0;c<max;c++){
        printf("informe o grau de germinação da %da semente",c+1);
        scanf("%d",germ+c);
    }
    CalcParar(germ);

}