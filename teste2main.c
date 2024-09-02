#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
EXEMPLO 3:
Ler o voto de 100 moradores para síndico do prédio.
Os cadidatos são:

CRIAR UM MENU DE OPÇÕES:

1: Fulano de Tal
2: Beltrano de Tal
3: Cicrano de Tal

Exiba o resultado da votação em porcentagem(%)
fulano   = 100.0 * (fulano / total);
beltrano = 100.0 * (beltrano / total);
cicrano  = 100.0 * (cicrano / total);
*/


int main()
{
    int moradores = 0, voto = 0;
    int fulano = 0, beltrano = 0, cicrano = 0;
    float pfulano, pbeltrano, pcicrano;

    printf("ELEICAO DE SINDICO DO PREDIO:");
    while (moradores < 3){
        printf("Menu de escolha:\n");
        printf("ESCOLHA 1: FULANO\n");
        printf("ESCOLHA 2: BELTRANO\n");
        printf("ESCOLHA 3: CICRANO\n");
        printf("Voto do morador %i: ", moradores + 1); scanf("%i", &voto);
        //TRATAMENTO DE ERRO
        if (voto < 1 || voto > 3)
            printf("Erro: Seu voto deve ser entre [1-3]");
        else{
            if (voto == 1){
            fulano += 1;
            }
            else if (voto == 2){
            beltrano += 1;
            }
            else{
            cicrano += 1;
            }
        }
        //TRATAMENTO
            moradores = moradores + 1;
            pfulano = 100.0 * fulano / moradores;
            pbeltrano = 100.0 * beltrano / moradores;
            pcicrano = 100.0 * cicrano / moradores;
        }
        //SAÍDA
            printf("A porcetagem de votos do FULANO e de: %.2f %%\n", pfulano);
            printf("A porcetagem de votos do BELTRANO e de: %.2f %%\n", pbeltrano);
            printf("A porcetagem de votos do CICRANO e de: %.2f %%\n", pcicrano);


    return 0;
}
