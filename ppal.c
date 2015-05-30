#include <stdio.h>
#include "FSM.h"	/*FSM engine*/
#include "FSMTABLE.h"   /*FSM Table*/
#include "termlib.h"    /*Enable the use of getch and getche see termlib.c*/





STATE *p2state=NULL;	/*Used to store FSM state*/

#define FIN_ARCHIVO  'Q'

int main (int argc, char** argv)
{
MYPORT portA;
MYPORT portB;

MYPORT *pA;
MYPORT *pB;
pA=&portA;
pB=&portB;

PORT16 portD;

portD.LS = portB;
portD.MS = portA;


//maquina de estado
     	int evento;
        
        

	p2state=FSM_GetInitState();// Inicializo la FSM con el estado inicial

	while((evento = getch())!= FIN_ARCHIVO)  //Si hay evento
	
	p2state=fsm(p2state,evento);      //Se lo paso a la maquina de estados

	getchar();

    
}
