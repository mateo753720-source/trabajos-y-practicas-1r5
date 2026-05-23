

#include <stdio.h>

int main()
{


float resultado, peso, altura;

    printf("ingrese su peso\n");
    scanf("%f",&peso);
    printf("ingrese altura\n");
    scanf("%f",&altura);
    
    resultado=(float) peso/(altura*altura);
    printf("el indice de masa corporal es:%f\n",resultado);
    
    
    if (resultado<18.5){
printf("usted tiene bajo peso\n");}
  else  if (resultado>=18.5 && resultado<=24.9){
printf("usted tiene un peso normal\n");}
  else  if (resultado>=25.0 && resultado<=29.9){
printf("usted tiene sobrepeso\n");}
  else  if (30.0<=resultado){
printf("usted tiene obesidad\n");}
  printf("  
    Índice    |  Condición

-----------------------------

    <18.5     |  Bajo peso

 18.5 a 24.9  |  Normal

 25.0 a 29.9  |  Sobrepeso

     >=30     |  Obesidad   \n"




    return 0;
}
