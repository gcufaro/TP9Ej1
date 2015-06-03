/* 
 * File:   funp.h
 * Author: ubuntu
 *
 * Created on May 29, 2015, 3:07 PM
 */

#ifndef FUNP_H
#define	FUNP_H


void bitSet(int a, MYPORT *p1);


void bitClr(int b, MYPORT *p2);


void bitToggle(int c, MYPORT *p3);


unsigned int bitGet(int d, MYPORT *p4);

// Función que carga una máscara en MYPORT//

void maskOn(char maskon, MYPORT *p5);

// Función que vuelve a poner al puerto como estaba, antes de cargar la máscara//

void maskOff(char maskoff, MYPORT *p6);

#endif	/* FUNP_H */

