#include <stdio.h>

int main(void){
    int n;
    int* ptr = &n;
    //int *ptr
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("numero digitado %d \n", n);
    printf("Endereco da memoria: %p\n", ptr);
    //desreferencia
    printf("Endereco da memoria: %d\n", *ptr);
    return 0;
}
