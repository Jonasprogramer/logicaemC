#include <stdio.h>

void parOuimpar(int x){
    if(x % 2 == 0){
        printf("Par");
    }else{
        printf("Impar");
    }
}

int main(void){
    int number;
    printf("Digite um número: ");
    scanf("%d",&number);
    parOuimpar(number);
    return 0;
}
