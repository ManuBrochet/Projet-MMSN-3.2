#include "algo.h"

int main()
{
    int choix1;
    do
    {
    printf("Bienvenu(e) dans ce calculateur !\n \n");
    printf("Que voulez-vous faire ?\n");
    printf("0 : Quitter le programme\n");    
    printf("1 : Faire une multiplication\n");
    printf("2 : Faire une division\n");
    scanf("%d", &choix1);

        if (choix1 == 1)
        {
            double x,z,res;
            printf("Donner les deux nombres à multiplier \n");
            scanf("%lf %lf", &x, &z);
            res = multiplication(x,z);
            printf("Le résultat est %lf \n" , res);
        };
        if (choix1 == 2)
        {
            double x,y,res;
            printf("Donner le numérateur \n");
            scanf("%lf", &y);
            printf("Donner le dénominateur \n");
            scanf("%lf", &x);
            res = division(y,x);
            printf("Le résultat est %lf \n \n" , res);
        }
    } while (choix1 != 0);
    printf("Merci d'avoir utilisé notre programme ! \n");
}