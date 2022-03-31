#include <stdio.h>
#include <iostream>
#include <conio.h>
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

    int x1 = 2;
    unsigned int x2 = 3;

    char x3 = 'a';
    x3 = x3 + 1;

    float x4;
    int *x5=NULL;
    x5 = &x1;
    
    scanf("%d", x5);
    printf("%d", x1);

    //citim 2 numere de la tastatura 

    getch();
    return 0;

    // deimpartit / impartitor = cat si rest
}