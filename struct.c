#include <stdio.h>

struct myStructure{
        int myNum;
        char myLetter;
        char name[30];
};

int main(void){
    struct myStructure s1;
    s1.myNum = 10;
    strcpy(s1.name, "Jonas miqueias");
    printf("this is struct %d \n", s1.myNum);
    printf("%s",s1.name);
    return 0;
}
