/*  Program treba izracunat: 1+1/2+1/3+1/4+1/5+.....+1/N  */

#include<stdio.h>

int main()
{
    int i,N;
    float suma;

    
    printf("Unesi do kojeg broja da zbraja: ");
    scanf("%d",&N);

    suma=0.0f;

    for(i=1;i<=N;i++)
        suma = suma + ((float)1/(float)i);


    printf("\nUkupna suma je: %f\n",suma);

    return 0;
}
