#include <stdio.h> // Biblioteca.
#include <locale.h> // Biblioteca.

int main() // Define a classe
{
  int repetidor = 1; // Declara e inicializa a vari�vel de controle

  while (repetidor <= 10) // La�o de repeti��o
  {
    setlocale(LC_ALL, "Portuguese"); // Define a linguagem para portugu�s.
    printf("       \n\n\n$$$ Calculadora de convers�o $$$\n"); // Define a mensagem que aparecer� na tela.
    int binario = 0, aux = 1; // Define as vari�veis
    int decimal = 0, auxx = 2; // Define as vari�veis
    printf("\nSelecione a sua op��o\n DECIMAL > BIN�RIO = 1\n BIN�RIO > DECIMAL = 2\n SAIR = 3, 4, 5 ...:"); //Define a mensagem que aparecer� na tela.
    scanf("%i", &aux); // Reconhece o valor inserido
    if(aux == 1) // Estrutura de condi��o
    {
        int dec,temp,i,j=1,bin=0;  // Define as vari�veis
        printf("\nDigite um n�mero decimal para converter em bin�rio:"); // Define a mensagem que aparecer� na tela.
        scanf("%d", &dec); // Reconhece o valor inserido.
        temp=dec; // Recebe o valor das vari�veis.
        while(temp!=0) // La�o de repeti��o.

        {
            // Efetua o c�culo.
            i = temp%2;
            bin = bin + (i*j);
            temp = temp / 2;
            j = j * 10;
        }
        printf("\nO n�mero %d convertido em bin�rio �:%d\n", dec, bin); // Define a mensagem que acompanhar� o resultado.
    }
    else if(aux == 2) // Estrutura de condi��o
        {
        int dec,temp,i,j=1,bin=0;  // Define as vari�veis
        printf("\nDigite um n�mero bin�rio para converter em decimal:"); // Define a mensagem que aparecer� na tela.
        scanf("%d", &dec); // Reconhece o valor inserido.
        temp=dec; // Recebe o valor das vari�veis.
        while(temp!=0) // La�o de repeti��o.

        {
            // Efetua o c�culo.
            i = temp%2;
            bin = bin + (i*j);
            temp = temp / 10;
            j = j * 2;
        }
        printf("\nO n�mero %d convertido em decimal �:%d\n", dec, bin); // Define a mensagem que acompanhar� o resultado.
    }else  // Estrutura de constru��o
    {
    return 1; // Finaliza a opera��o.
    }

  }

  return 0; // Encerra a execu��o e retorna para a estrutura de controle.
}
