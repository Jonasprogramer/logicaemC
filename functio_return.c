#include <stdio.h>

int dou(n){
    return n * 2;
}


int main(){
    int number, doub;

    printf("Digite um n�mero: ");
    scanf("%d",&number);

    doub = dou(number);

    printf("Double is %d", doub);

    return 0;
}
