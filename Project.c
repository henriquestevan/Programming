#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    int vet[25] = {4, 0, 2, 0, 8, 9, 9, 8, 6, 4, 0, 2, 0, 6, 8, 4, 9, 0, 9, 8, 2, 6, 2, 8, 4};
    int qnt_0 = 0, qnt_2 = 0, qnt_4 = 0, qnt_6 = 0, qnt_8 = 0, qnt_9 = 0;
    int senhaCorreta[6] = {6, 6, 4, 5, 8, 6};
    int mov, pos_inicial=10, tentativas, deslizamentos, pos_final;

    printf("Olá, para abrir esse cofre você deverá adivinhar a senha!!\n");

    printf("A senha é composta de 6 dígitos, e para descobri-la, você deverá se deslocar por uma barra escolhendo a posição que\n");
    
    printf("deseja ir, começando pela posição 10(começa na posição 0, ou seja, 0/1/2...24),\n");
    
    printf("\nSua senha será a quantidade de vezes que cada número aparece em cada movimento");
    
    printf("\nVocê só terá 3 tentativas!!");

    for (deslizamentos = 0; deslizamentos < 5; deslizamentos++)
    {

     printf("\nDigite a posição que deseja ir:");
     scanf("%d", &mov);

     if(mov>24 || mov<0)
     {
         printf("\nPosição inválida\n");
         exit(0);

     }

     if( mov>pos_inicial)
     {
        for( pos_final = pos_inicial; pos_final <= mov; pos_final++)
        {
            if(vet[pos_final] == 0)
            {
                qnt_0++;
            }
            else if(vet[pos_final] == 2)
            {
                qnt_2++;
            }
            else if(vet[pos_final] == 4)
            {
                qnt_4++;
            }
            else if(vet[pos_final] == 6)
            {
                qnt_6++;
            }
            else if(vet[pos_final] == 8)
            {
                qnt_8++;
            }
            else if(vet[pos_final] == 9)
            {
                qnt_9++;
            }
            pos_inicial = pos_final + 1;
        }
    }

    else
    {
        for( pos_final = pos_inicial; pos_final >= mov; pos_final--)
        {
            if(vet[pos_final] == 0)
            {
                qnt_0++;
            }
            else if(vet[pos_final] == 2)
            {
                qnt_2++;
            }
            else if(vet[pos_final] == 4)
            {
                qnt_4++;
            }
            else if(vet[pos_final] == 6)
            {
                qnt_6++;
            }
            else if(vet[pos_final] == 8)
            {
                qnt_8++;
            }
            else if(vet[pos_final] == 9)
            {
                qnt_9++;
            }
            pos_inicial = pos_final - 1;
        }
        }
    }





    printf("%d, %d, %d, %d, %d, %d", qnt_0, qnt_2, qnt_4, qnt_6, qnt_8, qnt_9);


    return 0;

}
