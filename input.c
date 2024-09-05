#include <stdio.h>

int main(void){
    char name[30];
    printf("Digite nome: ");
    //scanf("%s", name);
    fgets(name, sizeof(name),stdin);
    //resolvendo limitacao palavras


    printf("O nome digitado foi %s", name);
    return 0;
}
