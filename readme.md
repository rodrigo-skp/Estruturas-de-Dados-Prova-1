# Estruturas de Dados – Prova 1

Esta prova tem como foco as implementações abordadas em aula, envolvendo os seguintes tipos de listas:
- Lista baseada em vetor;
- Lista encadeada;
- Lista duplamente encadeada.

Você deverá implementar as funções membro indicadas abaixo. O código disponibilizado neste repositório é o mesmo utilizado durante as aulas. A correção será realizada por meio de testes automatizados, utilizando um subconjunto dos testes aplicados no Trabalho 1.

## Instruções

1. **Fork**: Faça um fork deste repositório.
2. **Ambiente**: Abra o repositório no **GitHub Codespaces**.
3. **Implementação**: Implemente as seguintes funções membro:

   - **Para a classe `VectorList`**:
     ```cpp
     template <class T>
     void VectorList<T>::pop_back();
     ```
     ```cpp
     template <class T>
     void VectorList<T>::insert(size_t index, const T& value);
     ```

   - **Para a classe `LinkedList`**:
     ```cpp
     template <class T>
     void LinkedList<T>::pop_front(const T& value);
     ```
     ```cpp
     template <class T>
     void LinkedList<T>::insert(size_t index, const T& value);
     ```

   - **Para a classe `DoublyLinkedList`**:
     ```cpp
     template <class T>
     void DoublyLinkedList<T>::pop_front();
     ```
     ```cpp
     template <class T>
     void DoublyLinkedList<T>::erase(iterator first, iterator last);
     ```

4. **Testes e Avaliação**: Compile o código e execute os testes. Sem a implementação das funções, 17 testes estão configurados para falhar. Sua nota será a proporção dos testes que passarem. Por exemplo, se apenas 3 testes falharem, sua nota será calculada como:  
   (17 – 3) / 17 × 10 = 8,23.
5. **Entrega da Prova**: Ao final da prova, todas as alterações realizadas devem estar commitadas. Em seguida, baixe o código (formato ZIP) do seu repositório no GitHub e realize a entrega por meio da intranet da UNIVALI. A nota só será atribuída após a entrega.

Boa prova!