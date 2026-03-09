#include <stdio.h>

int main() {
   int idade;
   printf("Digite sua idade:");
   scanf("%d", &idade);

   if (idade >= 18 && idade <=70){
    printf("Voto Obrigatorio\n");
   } else if (idade == 17 || idade > 70){
    printf("Voto não Obrigatorio\n");
   } else {
    printf("Não pode Votar\n");
   }

   return 0; 
}