#include <stdio.h>
//Utilizando recursividade
void movimentaPecaTorre (int numero1){
    if (numero1 > 0 )
    {   movimentaPecaTorre ( numero1 - 1);
        printf("%d casa para direita! \n" ,numero1);
    }}

void movimentaPecaBispo (int numero2){
    if (numero2 > 0 )
    {   movimentaPecaBispo ( numero2 - 1);
        printf("%d casa para Cima, Direita! \n" ,numero2);
    }}

void movimentaPecaRainha (int numero3){
    if (numero3 > 0 )
    {   movimentaPecaRainha ( numero3 - 1);
        printf("%d casa para Cima, Direita! \n" ,numero3);
    }}




int main(){
//Utilizando recursividade
int torre = 5;  
printf("Movimentação (Torre)!\n");
movimentaPecaTorre(torre);

int Bispo = 5;
printf("Movimentação (Bispo)!\n");
movimentaPecaBispo(Bispo);

int Rainha = 8;
printf("Movimentação (Rainha)!\n");
movimentaPecaRainha(Rainha);


// Declarar a direção do movimento cavalo
int casas_vertical = 2;
int casas_horizontal = 1;

    // Logica looping
        printf("Movimento (Cavalo)\n");
        for ( int i = 1; i <= casas_horizontal; i++)
        printf("Direita!\n");
    {   for (int j = 1; j <= casas_vertical; j++)
    {   printf("Cima!\n");
        /* code */
    }
    
        /* code */
    }

}

    


    


    return 0;
    
}