#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <math.h>
using namespace std;
#define TEST 5

// bit byte/octet memorie
// INTERFATA se numeste IDE
// COD -> COMPILATOR -> executabil/binar (limbaj cod masina)
// 1 bit -> 0/1 -> false/true 
// 1 octet/byte = 8 biti -> 00000000, 00000001
// https://mquest.ro/home/learnunit?id=21

// tipuri de date 
// reprezentarea tipurilor de date

// 1101 =
// 1 * 2^0 +
// 0 * 2^1 +
// 1 * 2^2 +
// 1 * 2^3 +
// = 1 + 0 + 4 + 8 = 13

// https://ocw.cs.pub.ro/courses/programare/laboratoare/lab02



int main()
{

    /*
    int x1 = 2;
    unsigned int x2 = 3;

    char x3 = 'a';
    x3 = x3 + 1;

    float x4;
    int *x5=NULL;
    x5 = &x1;
    
    scanf("%d", x5);
    printf("%d", x1);
    */

    /*int x;
    scanf("%d", &x);

    //operatorul logic si && 
    //operatorul logic sau ||
    //operatorul logis negare !

    if( x>7 && x<9 )
    {
        printf("ESTE IN INTERVAL");
    }else //optional
    {
        printf("NU ESTE IN INTERVAL");
    }

    switch(x)
    {
        case 0:
            printf("x este 0");
            break;
        
        case 1:
        case 2:
            printf("x este 1 sau 2");
            break;

        case 3:
            break;

        default:
            printf("x este 1");
            break;
    }

    switch(x%3)
    {
        case 0:
            printf("Divizibil cu 3");
            break;

        default:
            printf("NU divizibil cu 3");
            break;

    }

    if( x%3 == 0 )
    {
        printf("Divizibil cu 3");
    }else
    {
        printf("NU ese divizibil cu 3");
    }

    int y=10;
    
    while( y < 10 )
    {
        printf("%d ", y);
        y++;
    }

    y=10;
    do
    {
       printf("%d ", y);
       y++;
    } while (y < 10);

    //for (de unde se pleaca;conditia de stop; incremental)
    for(y=1; y<10; y++)
    {
        printf("%d ", y);
    }
    

    printf("AM TERMINAT ", y);*/

    //sa se scrie un program care spune daca un numar este prim sau nu
    //adica divibil doar cu 1 si el insusi
    int numar;
    scanf("%d", &numar);

    if(numar ==0 || numar ==1)
    {
        printf("NUMARUL NU ESTE PRIM");
        getch();
        return 0;
    }

    int iterator;
    for(iterator = 2; iterator < numar; iterator++)
    {
        if(numar % iterator ==0)
        {
            printf("NUMARUL NU ESTE PRIM");
            getch();
            return 0;
        }
    }
    printf("NUMARUL ESTE PRIM");

    //sa scrieti un program care imi zice daca nun numar este par sau impar
    //citente numere de la tastura pana la 0 si imi zice daca sunt impare

    getch();
    return 0;
}