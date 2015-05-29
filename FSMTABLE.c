#include "FSM.h"
#include "FSMTABLE.h"
#include <stdio.h>


//Declaro los estados

extern STATE estado_menuABD[];
extern STATE estado_menuA[];
extern STATE estado_menuB[];
extern STATE estado_menuD[];

//Prototipos
//////////////////////////////////FALTA HACER LAS FUNCIONES DE MENU
static void menu_a(void);

static void menu_b(void);

static void menu_d(void);

static void menu_abd(void);

//Tablas de estado

    //menu inicial
STATE estado_menuABD[]=
{
{'a',estado_menuA,menu_a},   //entro a se carga el menu de a
{'b',estado_menuB,menu_b},   //idem b
{'d',estado_menuD,menu_d},
{FIN_TABLA,estado_menuABD,menu_abd}
};

    //menu puerto A
STATE estado_menuA[]=
{
{'bs',estado_menuABD,bitSet},
{'bc',estado_menuABD,bitClr},
{'bt',estado_menuABD,bitToggle},
{'bg',estado_menuABD,bitGet},
{'mn',estado_menuABD,maskOn},
{'mf',estado_menuABD,maskOff},
{FIN_TABLA,estado_menuA,menu_a}
};        

    //menu puerto B
STATE estado_menuB[]=
{
{'bs',estado_menuABD,bitSet},
{'bc',estado_menuABD,bitClr},
{'bt',estado_menuABD,bitToggle},
{'bg',estado_menuABD,bitGet},
{'mn',estado_menuABD,maskOn},
{'mf',estado_menuABD,maskOff},
{FIN_TABLA,estado_menuB,menu_b}
};                
        
        
     



//Funciones de Menu
    void menu_a(void)
{//cambiar puntero para puerto A//////////////////
        printf("Puerto A:\nIngrese:\n'bs' para bitSet\n'bc' para bitClr\n'bt' para bitToggle\n'bg' para bitGet\n'mn' para maskOn\n'mf' para maskoff\n");
    }
    void menu_b(void)
{//cambiar puntero para puerto B///////////////////
        printf("Puerto B:\nIngrese:\n'bs' para bitSet\n'bc' para bitClr\n'bt' para bitToggle\n'bg' para bitGet\n'mn' para maskOn\n'mf' para maskoff\n");
    }
    void menu_d(void)
{//cambiar puntero para C///////////////////////////
        
    }
    static void menu_abd(void)
{   
        printf("Centro de Puertos\nIngrese:\n'a' para puerto A\n'b' para puerto B\n'd' para puerto D\n");


