// Discussão:
// A estratégia faz sentido, pois ao garantir que a partição menor seja processada antes da partição maior, o uso de espaço na pilha é minimizado. Esta política foi implementada. A modificação na lógica de empilhamento prioriza a inserção da partição maior antes da menor, garantindo assim um uso de pilha de ordem O(log(n)).

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quick_sort(int arr[], int low, int high) {
    t_stack *stack = create_stack(high + 1);

    push(stack, low);
    push(stack, high);

    while(!is_empty(stack)){
        high = pop(stack);
        low = pop(stack);
        if(low < high) {
            int p = partition(arr, low, high);

            if(p - 1 - low > high - (p + 1)) {
                if(p + 1 < high) {
                    push(stack, p + 1);
                    push(stack, high);
                }
                if(p - 1 > low) {
                    push(stack, low);
                    push(stack, p - 1);
                }
            } else {
                if(p - 1 > low) {
                    push(stack, low);
                    push(stack, p - 1);
                }
                if(p + 1 < high) {
                    push(stack, p + 1);
                    push(stack, high);
                }
            }
        }
    }
    destroy_stack(stack);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quick_sort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
