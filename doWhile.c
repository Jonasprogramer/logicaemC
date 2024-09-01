#include <stdio.h>

int main(void){
    int count = 10;
    printf("loops\n");

    do{
        printf("%d\n",count);
        count--;
    }while(count >= 1);

    return 0;
}
