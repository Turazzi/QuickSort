<h1>QuickSort</h1>
<p>Implementação de um Quick Sort não recursivo</p>

<h2>Descrição do Trabalho:</h2>
<p>O objetivo deste trabalho é implementar o algoritmo Quick Sort de forma não recursiva (ou iterativa).</p>

<h3>Requisitos de implementação:</h3>
<p>Todo o código deve ser implementado em linguagem C.</p>
<p>Deve-se implementar o algoritmo clássico do Quick Sort, mas adaptando-o para utilizar a pilha ao invés da recursão.</p>
<p>Por qual motivo deve-se usar uma pilha? :)</p>
<p>Utilize arquivos do tipo .h para declarações e .c para as implementações da TAD Pilha</p>

<h3>Considerações:</h3>
<p>No início do arquivo principal, coloque como comentário se a estratégia faz sentido e se ela foi implementada:</p>
<blockquote>
  <p>"A estratégia iterativa do algoritmo Quicksort oferece uma vantagem ao estabelecer limites para o tamanho da pilha. Em contraste com a abordagem recursiva, que insere duas partições na pilha de execução em ordem arbitrária, a versão iterativa verifica os tamanhos das partições antes de adicionar à pilha. Além disso, ao adotar uma política que prioriza a inserção dos índices da partição maior do vetor antes dos índices da partição menor, permite que o lado menor seja processado antes do lado maior. Como resultado, o tamanho da pilha é da ordem de O(log(n))."</p>
</blockquote>

<h3>Entrada e Saída:</h3>
<p>A entrada consiste de duas linhas:</p>
<ol>
  <li>A primeira linha representa a quantidade de elementos N do vetor</li>
  <li>A segunda linha representa os elementos do vetor, dispostos em uma sequência de números inteiros</li>
</ol>
<p>A saída é a sequência de elementos apresentada de maneira ordenada</p>
