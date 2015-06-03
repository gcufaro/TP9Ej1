// Programación I - Primer Cuatrimestre de 2015
// Trabajo Práctico Nº 9: Estructuras, uniones y bitfields.

// Ejercicio N°1
// Grupo N°2
// Integrantes:
// Cufaro, Gabriel Agustín
// De Ruschi, Agustin
// Luo, Leandro Adrian
// Michel, Bernardo



#include <stdio.h>
#include <stdlib.h>


/*
 * 
 */

typedef  struct
{
 unsigned int  bit7        : 1;
 unsigned int  bit6	   : 1;
 unsigned int  bit5        : 1;  
 unsigned int  bit4        : 1;  
 unsigned int  bit3        : 1;  
 unsigned int  bit2        : 1;
 unsigned int  bit1        : 1;
 unsigned int  bit0        : 1;
} MYPORT;

typedef struct
{
    MYPORT LS;
    MYPORT MS;
} PORT16;

int main(int argc, char** argv) 
{

    printf("Este programa se encarga de mostrar un ejemplo del funcionamiento de las funciones realizadas por el grupo 2\n\n");
    MYPORT portA;
    MYPORT portB;
    
    MYPORT *pA;
    MYPORT *pB;
    pA=&portA;
    pB=&portB;

    PORT16 portD;
    int i;
    portD.LS = portB;
    portD.MS = portA;
    printf("Muestro el estado del puerto A:\n");
    
        printf("%d",portA.bit0);
        printf("%d",portA.bit1);
        printf("%d",portA.bit2);
        printf("%d",portA.bit3);
        printf("%d",portA.bit4);
        printf("%d",portA.bit5);
        printf("%d",portA.bit6);
        printf("%d",portA.bit7);
    
    printf("\nFunción BitSet en el cuarto bit:\n");
    
    bitSet(3,pA);
    
    printf("%d\n",bitGet(3,pA));
    
    printf("Imprimo el nuevo estado del puerto A:\n");
        printf("%d",portA.bit0);
        printf("%d",portA.bit1);
        printf("%d",portA.bit2);
        printf("%d",portA.bit3);
        printf("%d",portA.bit4);
        printf("%d",portA.bit5);
        printf("%d",portA.bit6);
        printf("%d",portA.bit7);
    
    printf("\nFunción BitClr en el primer bit:\n");
    bitClr(0,pA);
    printf("%d\n",portA.bit0);
    
    printf("Imprimo el nuevo estado del puerto A:\n");
        printf("%d",portA.bit0);
        printf("%d",portA.bit1);
        printf("%d",portA.bit2);
        printf("%d",portA.bit3);
        printf("%d",portA.bit4);
        printf("%d",portA.bit5);
        printf("%d",portA.bit6);
        printf("%d",portA.bit7);
    
        printf("\nFunción MaskOn con todos los bits en 1:\n");
        maskOn(255,pA);
        printf("Imprimo el nuevo estado del puerto A:\n");
        printf("%d",portA.bit0);
        printf("%d",portA.bit1);
        printf("%d",portA.bit2);
        printf("%d",portA.bit3);
        printf("%d",portA.bit4);
        printf("%d",portA.bit5);
        printf("%d",portA.bit6);
        printf("%d",portA.bit7);
        
        printf("\nFunción MaskOff con 01100001: (apaga los bits de la máscara que puse en 1\n");
        maskOff((64+32+1),pA);
        printf("Imprimo el nuevo estado del puerto A:\n");
        printf("%d",portA.bit0);
        printf("%d",portA.bit1);
        printf("%d",portA.bit2);
        printf("%d",portA.bit3);
        printf("%d",portA.bit4);
        printf("%d",portA.bit5);
        printf("%d",portA.bit6);
        printf("%d",portA.bit7);
        
    return (EXIT_SUCCESS);
}
  