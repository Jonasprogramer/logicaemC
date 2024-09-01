#include <stdio.h>

int main(void){
    int count = 10;
    printf("loops\n");

    while(count >= 1){
        printf("%d \n", count);
        count-=2;
    }

    return 0;
}
