#include "headers/stack.h"

#include <stdlib.h>
#include <stdio.h>

#ifndef SPYDR06_CUTILS_STACK_INIT_SIZE
    #define SPYDR06_CUTILS_STACK_INIT_SIZE 32
#endif

#ifndef SPYDR06_CUTILS_STACK_MULTIPLIER
    #define SPYDR06_CUTILS_STACK_MULTIPLIER 2
#endif

struct CUTILS_STACK_STRUCT 
{
    size_t size;
    size_t allocated;
    void** items;
};

Stack_T* stack_init(void)
{
    Stack_T* stack = malloc(sizeof(struct CUTILS_STACK_STRUCT));
    stack->size = 0;
    stack->allocated = SPYDR06_CUTILS_STACK_INIT_SIZE;
    stack->items = malloc(stack->allocated * sizeof(void*));

    return stack;
}

bool stack_has_space(Stack_T* stack)
{
    return stack->size < stack->allocated;
}

void stack_grow(Stack_T* stack, size_t to)
{
    if(to <= stack->allocated)
        return;
    
    stack->items = realloc(stack->items, (
        stack->allocated = to
    ) * sizeof(void*));
}

void stack_push(Stack_T* stack, void* item)
{
    stack->size++;
    if(!stack_has_space(stack))
        stack_grow(stack, stack->allocated ? stack->allocated * SPYDR06_CUTILS_STACK_MULTIPLIER : SPYDR06_CUTILS_STACK_INIT_SIZE);
    stack->items[stack->size - 1] = item;
}

void* stack_pop(Stack_T* stack)
{
    return stack->size ? stack->items[--stack->size] : NULL;
}

void stack_free(Stack_T* stack)
{
    free(stack->items);
    free(stack);
}

void stack_clear(Stack_T* stack)
{
    for(size_t i = 0; i < stack->size; i++)
        stack->items[i] = NULL;
    stack->size = 0;
}

size_t stack_contains(Stack_T* stack, void* item)
{
    for(size_t i = 0; i < stack->size; i++)
        if(stack->items[i] == item)
            return i + 1;
    return 0;
}

void* stack_get(Stack_T* stack, size_t index)
{
    if(stack->size <= index)
        return NULL;
    
    return stack->items[index];
}

void** stack_get_data(Stack_T* stack)
{
    return stack->items;
}   

size_t stack_size(Stack_T* stack)
{
    return stack->size;
}