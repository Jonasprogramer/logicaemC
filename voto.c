#include <stdio.h>


int main(void){
   int age = 15;

    if(age <= 0){
        printf("numero invalida para verificacao");
    }else{
        if(age >= 16){
            printf("Apto a votar");
        }else if(age < 16){
            printf("Menor nao esta apto a votar");
        }else if(age > 65){
            printf("Voto opicional");
        }else{
            printf("Erro tente novamente");
        }
    }

   return 0;
}
