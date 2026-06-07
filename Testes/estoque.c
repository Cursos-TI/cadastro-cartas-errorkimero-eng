#include <stdio.h>

int main() {

float Temperatura, Unidade;
unsigned int Estoque, EstoqueMinimo = 1000;


printf("Entre com a temperatura: \n");
scanf("%f", &Temperatura);
printf("Entre com a unidade: \n");
scanf("%f", &Unidade);
printf("Entre com o estoque: \n");
scanf("%u", &Estoque);

if (Temperatura > 30){
    printf("A temperatura está quente \n");
}   else {
    printf("A temperatura está fria \n");
}
if (Unidade > 50){
    printf("A Unidade está elevada \n");
}   else {
    printf("A unidade está normal \n");
}
if (EstoqueMinimo <= Estoque){
    printf("O estoque está baixo \n");
}   else {
    printf("O estoque está alto \n");
}
return 0;
}