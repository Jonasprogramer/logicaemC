#include <stdio.h>
#include <stdlib.h>

int main(void){
    int items = 10;
    float cost_per_item = 9.99;
    float total_cost = items* cost_per_item;
    char currency = 'R$';

    //print variables
    printf("Number of items: %d\n", items);
    printf("Cost per items: %.2f %c\n", cost_per_item, currency);
    printf("Total cost: %.2f %c\n", total_cost, currency);
    return 0;
}
