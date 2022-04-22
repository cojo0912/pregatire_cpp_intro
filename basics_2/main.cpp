#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
#define TEST 12345

/*TIP NUME(parametrii)
{
    //corp functie
}*/

int minim(int x, int y)
{
    if(x<y)
    {
        return x;
    }else
    {
        return y;
    }
}

int functie_1(int a, int b)
{
    b=2;
    return a;
}

int functie_2(int a, int &b)
{
    b=20;
    return a;
}

int functie_3(int a, int *b)
{
    *b = 200;
    return a;
}

void test(int input, int &output)
{
    output = 5;
}

int main()
{
    //recapitulare biclioteci
    //directive preprocesare
    //functii parametrii referinta etc
    //vectori matrici

    int x = 1;
    int y = 9;
    int z = functie_1(x,y);
    printf("x:%d y:%d rez:%d\n", x , y, z); 
    z = functie_2(x,y);
    printf("x:%d y:%d rez:%d\n", x , y, z); 
    z = functie_3(x,&y);
    printf("x:%d y:%d rez:%d\n", x , y, z); 

    // y = test(x)
    // test(x,y)

    /*
    int numar = 0;
    while(numar >= 0)
    {
        printf("Introduce un numar intre 1 si 10\n");
        scanf("%d", &numar);
        if (numar <= 10 )
        {
            if(numar % 2 != 0)
            {
                printf("%d Numarul este impar\n", numar);
            }else
            {
                printf("%d Numarul nu este impar\n", numar);
            }
        }else 
        {
            printf("%d Nu face parte din interval\n", numar);
        }
    }*/


    getch();
    return 0;
}