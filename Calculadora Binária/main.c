#include <stdio.h> // Biblioteca.
#include <locale.h> // Biblioteca.

int main() // Define a classe
{
  int repetidor = 1; // Declara e inicializa a variável de controle

  while (repetidor <= 10) // Laço de repetição
  {
    setlocale(LC_ALL, "Portuguese"); // Define a linguagem para português.
    printf("       \n\n\n$$$ Calculadora de conversão $$$\n"); // Define a mensagem que aparecerá na tela.
    int binario = 0, aux = 1; // Define as variáveis
    int decimal = 0, auxx = 2; // Define as variáveis
    printf("\nSelecione a sua opção\n DECIMAL > BINÁRIO = 1\n BINÁRIO > DECIMAL = 2\n SAIR = 3, 4, 5 ...:"); //Define a mensagem que aparecerá na tela.
    scanf("%i", &aux); // Reconhece o valor inserido
    if(aux == 1) // Estrutura de condição
    {
        int dec,temp,i,j=1,bin=0;  // Define as variáveis
        printf("\nDigite um número decimal para converter em binário:"); // Define a mensagem que aparecerá na tela.
        scanf("%d", &dec); // Reconhece o valor inserido.
        temp=dec; // Recebe o valor das variáveis.
        while(temp!=0) // Laço de repetição.

        {
            // Efetua o cáculo.
            i = temp%2;
            bin = bin + (i*j);
            temp = temp / 2;
            j = j * 10;
        }
        printf("\nO número %d convertido em binário é:%d\n", dec, bin); // Define a mensagem que acompanhará o resultado.
    }
    else if(aux == 2) // Estrutura de condição
        {
        int dec,temp,i,j=1,bin=0;  // Define as variáveis
        printf("\nDigite um número binário para converter em decimal:"); // Define a mensagem que aparecerá na tela.
        scanf("%d", &dec); // Reconhece o valor inserido.
        temp=dec; // Recebe o valor das variáveis.
        while(temp!=0) // Laço de repetição.

        {
            // Efetua o cáculo.
            i = temp%2;
            bin = bin + (i*j);
            temp = temp / 10;
            j = j * 2;
        }
        printf("\nO número %d convertido em decimal é:%d\n", dec, bin); // Define a mensagem que acompanhará o resultado.
    }else  // Estrutura de construção
    {
    return 1; // Finaliza a operação.
    }

  }

  return 0; // Encerra a execução e retorna para a estrutura de controle.
}
