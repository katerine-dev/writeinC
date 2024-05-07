#include <stdio.h>
// Função que percorre o vetor várias vezes, comparando pares de elementos adjacentes e trocando-os se estiverem fora de ordem, até que o vetor esteja completamente ordenado.

void ordena(int vetor[], int tamanho) // recebe um vetor de inteiros e o tamanho do vetor
{
    for (int i = 0; i < tamanho; i++) // Ele começa com i igual a 0 e continua até i ser menor que tamanho, incrementando i em 1 a cada iteração.
    {
        for (int j = i; j < tamanho; j++) // Ele começa com j igual a i e continua até j ser menor que tamanho, incrementando j em 1 a cada iteração.
        {
            // Aqui estamos verificando se o elemento do vetor na posição i é maior que o elemento do vetor na posição j.
            if (vetor[i] > vetor[j])
            {
                int temp = vetor[i]; // Se a condição do if for verdadeira, estamos armazenando o valor do elemento do vetor na posição i em uma variável temporária chamada temp.
                vetor[j] = temp;
            }
        }
    }
}

void mostrarVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int main()
{
    int vetor[] = {38, 50, 20, 10, 50 , 55, 60, 75, 85, 99};
    int tamanho = sizeof(vetor) / sizeof(int); // pegando o tamanho do vetor

    printf("Vetor antes da ordenação: ");
    mostrarVetor(vetor, tamanho);
    printf("\n");

    ordena(vetor, tamanho);

    printf("Vetor depois da ordenação: ");
    mostrarVetor(vetor, tamanho);
    printf("\n");

}