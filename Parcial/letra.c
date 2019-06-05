#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Arraylist.h"
#include "letra.h"
int imprimirMenu()
{
    int opcion;

    printf("\tMENU\n");
    printf("1-Leer y mostrar\n");
    printf("2-Completar y mostrar\n");
    printf("3-Comprobar\n");
    printf("4-Salir\n");
    printf("Opcion: ");
    fflush(stdin);
    scanf("%d",&opcion);

    return opcion;
}

int parser_Letras(char* fileName,ArrayList* pArray)
{
    int returnAux=-1;
    FILE* pArch;
    eLetra* iLetra;

    char* nameCount = "Contador";

    char name1 [15];
    char name2 [15];
    char name3 [15];
    char name4 [15];

    char letra[2];
    char nombre[21];
    char vocal[2];
    char consonante[21];

    int count=0;
    pArch = fopen(fileName,"r");

    if(pArch!=NULL)
    {
        fscanf(pArch,"%[^,],%[^,],%[^,],%[^\n]",name1,name2,name3,name4);
        printf("\n%8d,%5s\t%10s\t%5s\t%5s\n",nameCount,name1,name2,name3,name4);

        while(!feof(pArch))
        {
            count++;

            fscanf(pArch,"%[^,],%[^,],%[^,],%[^\n]",letra,nombre,vocal,consonante);

            if(feof(pArch))break;

            iLetra = (eLetra*) malloc(sizeof(eLetra));

            setLetra(letra,nombre,iLetra);

            printf("\n%8d\t%3c\t%10s\t%5d\t%5d\n",count,iLetra->letra,iLetra->nombre,iLetra->vocal,iLetra->consontante);

            if(al_add(pArray,iLetra)!=0)break;

        }

        returnAux=0;
    }

    return returnAux;
}

void setLetra(char* letra,char* nombre_l,eLetra* pLetra)
{
    char newLetra = letra[1];

    pLetra->letra = newLetra;
    strcpy(pLetra->nombre,nombre_l);
    pLetra->vocal=0;
    pLetra->consontante=0;
}

void completar(ArrayList* pList,int index)
{
    eLetra* iLetra;

    iLetra = al_get(pList,index);

    if(iLetra->letra == 'a'||iLetra->letra == 'e'||iLetra->letra == 'i'||iLetra->letra == 'o'||iLetra->letra == 'u')iLetra->vocal=1;
    else iLetra->consontante = 1;
    printf("\n%3c\t%10s\t%5d\t%5d\n",iLetra->letra,iLetra->nombre,iLetra->vocal,iLetra->consontante);
}

void Comprobar(ArrayList* pList){

char* palabra;
int cant = al_len(pList);

printf("\nIngresar palabra: ");
fflush(stdin);
scanf("%s",palabra);


}




