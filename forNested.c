#include <stdio.h>

int main(void){
    int i, j;

    for(i = 0; i<= 5; i++){
        printf("%d \n", i);
        printf("\n");
        for(j = i+1; j <= 5; j++){
            printf("%d", j);
        }
    }
    return 0;
}
