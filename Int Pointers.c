//Author: Nathaniel Mugenyi
//Date: 22, July,2024

//Description: Pointers with Integers 

#include <stdio.h>

int main() {

    int var = 5; //integer Variable
    int *pointer;//pointer

    pointer = &var;//assigning var to pointer

    printf("Pointer Address: %p", pointer);//pointer address
    printf("\nPointer Value: %d", *pointer);//pointer value
}
