/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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


    return 0;
}