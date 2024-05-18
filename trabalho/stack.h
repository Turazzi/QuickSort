#ifndef STACK_H
#define STACK_H

typedef struct {
    int capacity;
    int top_index;
    int *elems;
} t_stack;

t_stack* create_stack(int n);
void destroy_stack(t_stack *stack);
int is_empty(t_stack *stack);
int is_full(t_stack *stack);
void push(t_stack *stack, int item);
int pop(t_stack *stack);

#endif /* STACK_H */
