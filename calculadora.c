#include<stdio.h>
#include<stdlib.h>

void main () {
	int numero1;
        int numero2;
        int resultado;
     

        puts (" ========== calculadora de multiplicação ==========");
        puts ("insira o primeiro número inteiro: ");
        scanf ("%d", &numero1);
        puts ("insira o segundo número inteiro: ");
        scanf ("%d", &numero2);
	resultado= numero1*numero2;
        printf ("o número %d multiplicado por %d resulta em: %d ", numero1, numero2, resultado);

}
