#  Leitor de Caracteres

Este programa em C permite ao usuário inserir uma frase e, em seguida, exibe cada caractere da frase, juntamente com seu índice.

## Funcionalidades

O programa realiza as seguintes ações:

1.  **Solicita ao usuário:** O programa pede para o usuário digitar uma frase.
2.  **Lê a frase:** A frase é lida e armazenada em um vetor de caracteres (string).
3.  **Exibe os caracteres:** O programa percorre a string, exibindo cada caractere e seu respectivo índice.

## Como usar

1.  **Compile o código:**
    ```bash
    gcc contador_caracteres.c -o contador_caracteres
    ```
2.  **Execute o programa:**
    ```bash
    ./contador_caracteres
    ```
3.  **Digite a frase:** O programa solicitará que você digite uma frase.
4.  **Veja o resultado:** O programa exibirá cada caractere da frase, juntamente com seu índice.

## Exemplo
```bash
Digite a sua Frase: Esta é uma frase de exemplo.
0->[E]->1->[s]->2->[t]->3->[a]->4->[ ]->5->[é]->6->[ ]->7->[u]->8->[m]->9->[a]->10->[ ]->11->[f]->12->[r]->13->[a]->14->[s]->15->[e]->16->[ ]->17->[d]->18->[e]->19->[ ]->20->[e]->21->[x]->22->[e]->23->[m]->24->[p]->25->[l]->26->[o]->27->[.]->
```


# Observações

*   O tamanho máximo da frase é limitado a 99 caracteres (devido ao tamanho do vetor `minhaFrase`).
*   O programa utiliza a função `scanf` com especificador de formato `%99[^\n]` para ler a frase, o que permite ler espaços em branco e limita a leitura a 99 caracteres para evitar estouro de buffer.

## Contribuições

Contribuições são sempre bem-vindas! Sinta-se à vontade para abrir issues e enviar pull requests.
