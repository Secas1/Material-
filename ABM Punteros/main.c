#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
}eFecha;

typedef struct
{
    int idEmpleado;
    char nombre;
    char apellido;
    eFecha eFechaNacimiento;
    int sector;
    float salario;
}eEmpleado;

int main()
{
    FILE* pArchivo;
    char nombre [20];
    char apellido [20];

    int cant,longi;

    if(pArchivo=fopen("empleados.csv","a")==NULL)
    {
        printf("\n### Error al abrir\n");
    }

    printf("\nNombre: ");
    fflush(stdin);
    scanf("%s",&nombre);

    printf("\nApellido: ");
    fflush(stdin);
    scanf("%s",&apellido);

    longi=strlen(nombre);

    cant=fwrite(nombre,sizeof(char),longi,pArchivo);'
}

