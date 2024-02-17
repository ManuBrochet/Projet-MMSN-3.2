#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define NMAX 100

double multiplication(double x, double z)
{
    int i;
    double y0, y1=0, eps=1e-5;
    for (i=1; i<=NMAX; i++)
    {
        y0 = y1;
        if (z<0)
        {
            y1 = y1 - x * pow(2,-i);
            z = z + pow(2,-i);
        }
        else
        {
            y1 = y1 + x * pow(2,-i); 
            z = z - pow(2,-i);
        }
        if (fabs(y0-y1)<eps)
        {
            return y1;
        }
        printf("Ceci est y %lf \n", y1);
        printf("Ceci est z %lf \n", z);
    }
    printf("L'algo n'a pas convergé apres %d itérations. \n", NMAX);
    return y1;
}

double division(double y, double x)
{
    int i;
    double eps=1e-5, z0, z1=0;
    for (i=1; i<=NMAX; i++)
    {
        z0=z1;
        if (y>0)
        {
            y = y - x * pow(2,-i); 
            z1 = z1 + pow(2,-i);
        }
        else
        {
            y = y + x * pow(2,-i); 
            z1 = z1 - pow(2,-i);
        }
        if(fabs(z0-z1)<eps)
        {
            return z1;
        }
        printf("Ceci est y %lf \n", y);
        printf("Ceci est z %lf \n", z1);
    }
    return z1;
}