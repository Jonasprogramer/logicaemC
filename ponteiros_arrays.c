#include <stdio.h>

int main(void){
    int vet[4] = {1,5,3,5};

    //printf("%p", vet);
    //printf("%p", &vet[0]);
    printf("%d", *(vet + 1));
    return 0;
}
