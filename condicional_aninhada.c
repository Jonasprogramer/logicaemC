#include <stdio.h>


int main(void){
   int time = 6;
   if(time > 5 && time < 13){
    printf("Bom dia");
   }else if(time >= 13 && time < 18){
    printf("Boa tarde");
   }else{
        printf("Boa noite");
   }
   return 0;
}
