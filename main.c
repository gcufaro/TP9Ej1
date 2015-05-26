/* 
 * File:   main.c
 * Author: Mercedes
 *
 * Created on 25 de mayo de 2015, 18:16
 */

#include <stdio.h>
#include <stdlib.h>

void bitClr(int a);

/*
 * 
 */

typedef  struct
{
 unsigned int  bit0        : 1;
 unsigned int  bit1	   : 1;
 unsigned int  bit2        : 1;  
 unsigned int  bit3        : 1;  
 unsigned int  bit4        : 1;  
 unsigned int  bit5        : 1;
 unsigned int  bit6        : 1;
 unsigned int  bit7        : 1;
} MYPORT;

typedef struct
{
    MYPORT LS;
    MYPORT MS;
} PORT16;

void bitSet(int a, MYPORT *p1);

int main(int argc, char** argv) {

MYPORT portA;
MYPORT portB;

MYPORT *pA;
MYPORT *pB;
pA=&portA;
pB=&portB;

PORT16 portD;

portD.LS = portB;
portD.MS = portA;

bitSet(4,pA);
printf("%d",portA.bit4);

    return (EXIT_SUCCESS);
}

void bitSet(int a, MYPORT *p1)
{
    switch (a)
    {
        case 0:    p1->bit0=1; 
            break;
        case 1:    p1->bit1=1;
            break;
        case 2:    p1->bit2=1; 
            break;
        case 3:    p1->bit3=1;
            break;
        case 4:    p1->bit4=1;
            break;
        case 5:    p1->bit5=1;
            break;
        case 6:    p1->bit6=1;
            break;
        case 7:    p1->bit7=1;
            break;
        default: printf("Bit no valido\n");
            break;
    }
}



