#include "stack.h"

// implemenatation of the list struct
struct CUTILS_STACK_STRUCT 
{
    size_t allocated;
    size_t len;
    size_t item_size;

    void** data;
};

// implementation of the stack functions
void* alloc_stack(size_t num_items, size_t item_size)
{

}

void  free_stack(stack_t* stack)
{

}

void init_stack(stack_t* stack, size_t item_size)
{

}

size_t stack_len(stack_t* stack)
{

}

bool push_stack(stack_t* stack, void* item)
{

}

void* pop_stack(stack_t* statck)
{
    
}