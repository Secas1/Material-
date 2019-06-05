
#ifndef LETRA
#define LETRA


typedef struct
{
    char letra;
    char nombre[21];
    int vocal;
    int consontante;
}eLetra;

int imprimirMenu();
int parser_Letras(char* fileName,ArrayList* pArray);
void setLetra(char* letra,char* nombre,eLetra* pLetra);
void completar(ArrayList* pList,int index);
void guardarLista(ArrayList* pList,char* nameArchive);
void Comprobar();

#endif
