#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int functie_1(int a, int b)
{
    if(a<b)
        return a;
    else 
        return b;
}

//75: 1, 75, 3, 5, 15, 25
int functie_2(int x)
{
    int i;
    for(i=x-1; i>0; i--)
    {
        printf("%d ", i);
        if(x%i==0)
            return i;
    }
}

void functie_3(int x, int &rez)
{
    int i;
    for(i=x-1; i>0; i--)
    {
        printf("%d ", i);
        if(x%i==0)
        {
            rez = i;
            break;
        }
    }
}

int functia_4(int n)
{
    int suma=0;
    while(n>0)
    {
        suma = suma + (n%10);
        n = n / 10;
    }
    return suma;
}

int functie_5(int n)
{
    int suma = 0;
    int i;
    for(i = n; i>0; i--)
    {
        suma = suma + i;
    }
    return suma;
}

int functie_5_var_2(int n)
{
    int suma = 0;
    int i;
    for(int i=1; i<=n; i++)
    {
        suma = suma + i;
    }
    return suma;
}

float functie_6()
{
    float numar;
    float suma = 0;
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%f", &numar);
        suma = suma + numar;
    }
    return suma/5;
}

int main()
{
    int a;
    int b;


    /*printf("%d\n", functie_2(15));

    int rezultat;
    functie_3(15, rezultat);
    printf("%d", rezultat); */

    printf("%f", functie_6());

    getch();
    return 0;
}