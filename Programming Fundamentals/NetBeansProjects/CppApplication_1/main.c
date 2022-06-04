
/* 
 * File:   main.c
 * Author: antho
 *
 * Created on November 20, 2019, 5:15 PM
 */

#include <stdio.h>
#include <stdlib.h>

struct Item {
    int quantity;
    char name[80];
};

void display(struct Item t) {
    printf("%d",t.quantity);
    printf("\n");
    printf("%s",t.name);
    printf("\n");
}

int main() {
    int correctInput = 0;
    int *ptr = malloc(sizeof(int));
    free(ptr);
    struct Item t;          
    
    printf("Please enter a quantity greater than 0: ");
    scanf("%d", *ptr);
    
    t.quantity = *ptr;
    
    while(correctInput == 0) {
        printf("Please enter a number greater than 0: ");
        scanf("%d", &t.quantity);
        if(t.quantity > 0)
            correctInput = 1;
    }
    
    printf("Please enter the name of the item (no spaces): ");
    scanf("%s",t.name);
    display(t);
    
    return (EXIT_SUCCESS);
}

