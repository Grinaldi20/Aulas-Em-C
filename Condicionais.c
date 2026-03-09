#include <stdio.h>

int main() {
   int numero;
   printf("Digite um numero:");
   scanf("%d", &numero);

   printf("Numero Digitado: %d\n" , numero);

   if(numero > 0) {
    printf("Numero ALFA\n");
   } else if (numero < 0) {
    printf("Numero BETA\n");
   } else{
    printf("Numero NEUTRO\n");
   }

   if(numero % 2 == 0){\
   printf("Numero PAR\n");
   } else {
    printf("Numero IMPAR\n");
   }

    return 0;
}