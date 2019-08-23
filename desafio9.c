#include <stdio.h>

int main(void)
{
    int dia1, mes1, ano1, dia2, mes2, ano2;

    // Recebe a primeira data
    printf("Digite o dia mes e ano da primeira pessoa:\t");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    // Recebe a segunda data
    printf("Digite  o dia mes e ano da segunda pessoa:\t");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    // Validacao das datas

    if (ano1 < 0 || ano2 < 0)
    {
        printf("Digite um ano valido\n");
        return 0;
    }

    // Indica quem e mais velho

    if (ano1 < ano2)
    {
        printf("primeiro\n");
    }
    else if (ano2 < ano1)
    {
        printf("segundo\n");
    }
    else if (ano2 == ano1)
    {
        if (mes1 < mes2)
        {
            printf("primeiro\n");
        }
        else if (mes1 == mes2)
        {
            if (dia1 < dia2)
            {
                printf("primeiro\n");
            }
            else if (dia1 == dia2)
            {
                printf("mesmo dia\n");
            }
            else
            {
                printf("segundo\n");
            }    
        }
        else
        {
            printf("segundo\n");
        }
        
        
        
    }
    
    
    
    
    
}