#include "stack.h"
#include <stdlib.h>

t_stack* create_stack(int n) {
    t_stack *stack = (t_stack*) malloc(sizeof(t_stack));
    stack->capacity = n;
    stack->top_index = -1;
    stack->elems = (int *) malloc(stack->capacity * sizeof(int));
    return stack;
}

void destroy_stack(t_stack *stack){
    free(stack->elems);
    free(stack);
}

int is_empty(t_stack *stack){
    return (stack->top_index == -1);
}

int is_full(t_stack *stack) {
    return(stack->top_index == stack->capacity - 1);
}

void push(t_stack *stack, int item) {
    if(is_full(stack)) return;
    stack->top_index++;
    stack->elems[stack->top_index] = item;
}

int pop(t_stack *stack){
    if(is_empty(stack)) return 0;
    int item = stack->elems[stack->top_index];
    stack->top_index--;
    return item;
}
