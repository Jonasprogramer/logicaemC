#include <stdio.h>
#include <stdlib.h>

int main(void){
    int vetor[] = {1,2,3,4};

    for(int i = 0; i < sizeof(vetor)/sizeof(int); i++){
        printf("%d \n", vetor[i]);
    }
    return 0;
}
