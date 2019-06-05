#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Arraylist.h"





int main()
{
    int out=1;
    ArrayList* listaLetras;
    int cant;

    listaLetras=al_newArrayList();

    do
    {
        switch(imprimirMenu())
        {
            case 1:
            parser_Letras("datos.csv",listaLetras);
            break;
            case 2:
            cant = al_len(listaLetras);

            for(int i=0;i<cant;i++){

                completar(listaLetras,i);
            }
            break;
            case 3:
            Comprobar(listaLetras);
            break;
            case 4:
            out=0;
            break;
        }

        system("pause");
        system("cls");
    }while(out==1);
}








