/////////////////////////
//Funciones de Puertos
/////////////////////////
    









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

void bitClr(int b, MYPORT *p2)
{
    switch (b)
    {
        case 0:    p2->bit0=0; 
            break;
        case 1:    p2->bit1=0;
            break;
        case 2:    p2->bit2=0; 
            break;
        case 3:    p2->bit3=0;
            break;
        case 4:    p2->bit4=0;
            break;
        case 5:    p2->bit5=0;
            break;
        case 6:    p2->bit6=0;
            break;
        case 7:    p2->bit7=0;
            break;
        default: printf("Bit no valido\n");
            break;
    }
}

void bitToggle(int c, MYPORT *p3)
{
    switch (c)
    {
        case 0:    if(p3->bit0==0)
                    (p3->bit0=1); else{
                    p3->bit0=0;
                    }; 
            break;
        case 1:    if(p3->bit1==0)
                    (p3->bit1=1); else{
                    p3->bit1=0;
                    }; 
            break;
        case 2:    if(p3->bit2==0)
                    (p3->bit2=1); else{
                    p3->bit2=0;
                    }; 
            break;
        case 3:    if(p3->bit3==0)
                    (p3->bit3=1); else{
                    p3->bit3=0;
                    }; 
            break;
        case 4:    if(p3->bit4==0)
                    (p3->bit4=1); else{
                    p3->bit4=0;
                    }; 
            break;
        case 5:    if(p3->bit5==0)
                    (p3->bit5=1); else{
                    p3->bit5=0;
                    }; 
            break;
        case 6:    if(p3->bit6==0)
                    (p3->bit6=1); else{
                    p3->bit6=0;
                    }; 
            break;
        case 7:    if(p3->bit7==0)
                    (p3->bit7=1); else{
                    p3->bit7=0;
                    }; 
            break;
        default: printf("Bit no valido\n");
            break;
    }
}

unsigned int bitGet(int d, MYPORT *p4)
{
    switch (d)
    {
        case 0:    return(p4->bit0); 
            break;
        case 1:    return(p4->bit1); 
            break;
        case 2:    return(p4->bit2); 
            break;
        case 3:    return(p4->bit3); 
            break;
        case 4:    return(p4->bit4); 
            break;
        case 5:    return(p4->bit5); 
            break;
        case 6:    return(p4->bit6); 
            break;
        case 7:    return(p4->bit7); 
            break;
        default: printf("Bit no valido\n");
            break;
    }    
}

// Función que carga una máscara en MYPORT//

void maskOn(char mask, MYPORT *p5)
{

	backup=*p5;	//guardo el estado del puerto en un backup
	*p5=mask;
}


// Función que vuelve a poner al puerto como estaba, antes de cargar la máscara//

void maskOff(MYPORT *p6)
{
	*p6=backup;	//recupero el estado del puerto que tenia antes de la maskOn
}

