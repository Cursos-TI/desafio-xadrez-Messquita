#include <stdio.h>
int main(){
    
    int torre, Bispo = 1, Rainha = 1, i = 1 , j = 0;
    char T [6] = "Torre", B [6] = "Bispo", R [7]= "Rainha", C [7] = "Cavalo";

    for ( torre = 1; torre <= 5; torre++)
    {   printf("%s: Direita!\n", T);   }
    
    while (Bispo <= 5)
    {   
        printf("%s: Cima, direita!\n", B);
        Bispo++;    }
    
    do
    {   printf("%s: Esquerda!\n" , R);
        Rainha++;
        
    } while (Rainha <= 7);
    printf("\n"); //Utilizado para pular uma linha

    for (i = 1; i <= 2; i++)
    {   printf("%s: Baixo!\n", C);
        for (j = 1; j <= 1 ; j++)
        {   printf("%s: Esquerda!\n", C);
            
        }
        
    }
    


    


    return 0;
    
}