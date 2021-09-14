#ifndef SPYDR06_CUTILS_STACK_H
#define SPYDR06_CUTILS_STACK_H

// std includes
#include <stddef.h>
#include <stdbool.h>

// define the stack_t type
typedef struct CUTILS_STACK_STRUCT stack_t;

// stack functions
void* alloc_stack(size_t num_items, size_t item_size); // allocate the stack
void  free_stack(stack_t* stack);                      // free the stack

void init_stack(stack_t* stack, size_t item_size); // initialize a stack
size_t stack_len(stack_t* stack);                  // get the length of the stack

bool push_stack(stack_t* stack, void* item); // push an item on the stack, return success
void* pop_stack(stack_t* statck);            // pop the top item of the stack and return it

#endif /* SPYDR06_CUTILS_STACK_H */