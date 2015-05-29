/* 
 * File:   FSM.h
 * Author: ubuntu
 *
 * Created on May 29, 2015, 1:45 PM
 */

#ifndef FSM_H

#define	FSM_H
#define FIN_TABLA 0xFF

typedef	int BYTE;
typedef struct tabla_estado STATE;

struct tabla_estado

{
	BYTE  evento;
	STATE *prx_estado;
	void (*p_rut_accion)(void);
};

// Interfaz
STATE* fsm(STATE *p_tabla_estado,BYTE evento_actual);

#endif