#include <stdio.h>
#include <stdbool.h>

double comprimento(){
    int escolha;
    bool repete = true;
    double n;
    printf("Entre com um valor em [m] para conversão: ");
    scanf("%lf",&n);
    printf("km: %.3lf\n",n/1000);
    printf("cm: %.1lf\n",n*100);
    printf("mm: %.1lf\n",n*1000);
    do{
    printf("Qual a unidade desejada? \n");
    printf("[1] para km\n");
    printf("[2] para cm\n");
    printf("[3] para mm\n");
    scanf("%d",&escolha);
    if(escolha>0||escolha<4){
        repete=false;
    }
    switch (escolha)
    {
    case 1:
        return (n/1000);
    case 2:
        return (n*100);
    case 3:
        return (n*1000);
    default:
        printf("Escolha fora do intervalo\n");
        repete = true;
        break;
    }
    }while(repete==true);
}
    int main(){
        comprimento();
        return 0;
    }
