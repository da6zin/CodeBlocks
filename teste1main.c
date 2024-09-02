#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*EXEMPLO 1:
Ler a nota[0, 10] de 50 alunos (CONDI��O - STOP: VALOR FINAL) de uma turma
e exibir sua a m�dia geral.
M�dia = Soma as Notas de todos / Alunos
*/

int main()
{
    int aluno = 0;
    float nota, soma, media;
    while(aluno < 50){
        printf("Nota [0-10] - Aluno %i:", aluno + 1);
        scanf("%f", &nota);
    //Tratamento de erro
    if (nota < 0 || nota > 10)
        printf("Erro: A nota deve ser de 0 � 10");
    else {
        //Acumular: Valor e contagem
         soma += nota;
         aluno += 1;
        }
    }
    media = soma / aluno;
    printf("A m�dia da turma � de: %.2f", media);

    return 0;
}
