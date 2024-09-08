#include <stdio.h>


//function declaration
int myfunction(int x, int y);


//the main method
int main(){
    int result = myfunction(5,3); //call the function
    printf("Result is = %d", result);
    return 0 ;
}


//function definition
int myfunction(int x, int y){
    return x + y;
}
