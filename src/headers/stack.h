#ifndef SPYDR06_CUTILS_STACK_H
#define SPYDR06_CUTILS_STACK_H

// std includes
#include <stddef.h>
#include <stdbool.h>

// define the Stack_T type
typedef struct CUTILS_STACK_STRUCT Stack_T;

// stack functions
Stack_T* stack_init(void);                         // initialize a stack
void stack_free(Stack_T* stack);                   // free a stack
void* stack_get(Stack_T* stack, size_t index);     // get a pointer from the stack
void** stack_get_data(Stack_T* stack);             // get all data from the stack
size_t stack_size(Stack_T* stack);                 // get the size of the stack
void stack_push(Stack_T* stack, void* item);       // push a pointer to a stack
void* stack_pop(Stack_T* stack);                   // pop a pointer from a stack
void stack_clear(Stack_T* stack);                  // clear the stack
size_t stack_contains(Stack_T* stack, void* item); // check if the stack contains a pointer

#endif /* SPYDR06_CUTILS_STACK_H */