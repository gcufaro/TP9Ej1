/* 
 * File:   myport.h
 * Author: bernardomichel
 *
 * Created on 2 de junio de 2015, 20:12
 */

#ifndef MYPORT_H
#define	MYPORT_H

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

#endif	/* MYPORT_H */

