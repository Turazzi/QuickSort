# QuickSort
Implementação de um Quick Sort não recursivo

<h2> **Descrição do Trabalho:** </h2>
O objetivo deste trabalho é implementar o algoritmo Quick Sort de forma não recursiva (ou iterativa).

<h3> Requisitos de implementação: </h3>
- Todo o código deve ser implementado em linguagem C.
- Deve-se implementar o algoritmo clássico do Quick Sort, mas adaptando-o para utilizar a pilha ao invés da recursão.
- Por qual motivo deve-se usar uma pilha??? : )
- Utilize arquivos do tipo .h para declarações e .c para as implementações da TAD Pilha
- Tipo de dado t_stack
- Inclua um makefile para facilitar a compilação do código.
- Considere o texto abaixo e discuta com o grupo. No início do arquivo principal, coloque como comentário se a estratégia faz sentido e se ela foi implementada
  "A estratégia iterativa do algoritmo Quicksort oferece uma vantagem ao estabelecer limites para o tamanho da pilha. Em contraste com a abordagem recursiva, que insere duas partições na pilha de execução em ordem arbitrária, a versão iterativa verifica os tamanhos das partições antes de adicionar à pilha. Além disso, ao adotar uma política que prioriza a inserção dos índices da partição maior do vetor antes dos índices da partição menor, permite que o lado menor seja processado antes do lado maior. Como resultado, o tamanho da pilha é da ordem de O(log(n))."


<h3> **Entrada e saída:** </h3>
A entrada consiste de duas linhas.
A primeira linha representa a quantidade de elementos N do vetor
A segunda linha representa os elementos do vetor, dispostos em uma sequência de númertos inteiros
A saída é a sequência de elementos apresentada de maneira ordenada
