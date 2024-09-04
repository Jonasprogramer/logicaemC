#include <stdio.h>

int main(void){
    char name[] = "Jonas";
    int i;

    printf("\"%s\"\n", name);
    name[0] = 'L';
    printf("First letter your name = %c \n", name[0]);

    //loop
    for(i = 0; i < sizeof(name)/sizeof(name[0]); i++){
        printf("%c\n",name[i]);
    }
    return 0;
}
