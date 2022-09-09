#include <stdio.h>
#include "cs50.h"

int print_space(int num) {
    for (int i = 0; i < num; i++) {
        printf(" ");
    }
}

int print_hashmark(int num) {
    for (int i = 0; i < num; i++) {
        printf("#");
    }
}

int main(void) {

    int height = 0;
    while (height < 1 || height > 8 ) {
        height = get_int("Enter Height: "); }
    printf("\n");
    
    for (int i = 0; i < height; i++) {           
        print_space(height - i -1);
        print_hashmark(i + 1);
        print_space(2);
        print_hashmark(i + 1);
        print_space(height - i -1);
        printf("\n");        
    }
    printf("\n"); 
}