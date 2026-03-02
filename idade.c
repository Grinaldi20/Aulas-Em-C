#include <stdio.h>

int main () {

//Variaveis declaradas
int idade = 20;
int idade2 = 10;
int idade3 = 5;
int idade4 = 2;

//Operações matematicas
int Divisão = idade / idade4 ;
int Multiplicação = idade * idade3;
int soma = idade + idade2;
int subtração = idade - idade2;
int Resto = idade % idade3;


//Mostrar idade inicial
printf("idade: %d\n", idade);
//Soma das idades
printf("idade + idade2 : %d\n", soma);
//Subtração das idades
printf("idade - idade2 : %d\n", subtração);
//Multiplicação
printf("idade * idade3 : %d\n", Multiplicação);
//Divisão
printf("idade / idade4 : %d\n", Divisão);
//Resto da divisão 
printf(" Resto da Divisão : %d\n", Resto);
return 0;

}