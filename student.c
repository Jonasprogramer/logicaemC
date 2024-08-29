#include <stdio.h>
#include <stdlib.h>

int main(void){
    int studentID = 152;
    int studentAge = 25;
    float studentFee = 105.25;
    char studentGrade = 'J';

    //print Variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d \n", studentAge);
    printf("Student fee: %.2f \n", studentFee);
    printf("Student grade: %c", studentGrade);

    return 0;
}
