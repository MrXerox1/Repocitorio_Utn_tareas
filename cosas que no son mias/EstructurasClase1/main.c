#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 5
typedef struct{
    int legajo;
    int nota;
    char nombre[50];
    int estaVacio;//0 para no , 1 para esta vacio
}eAlumno;

void InicializarAlumnos(eAlumno listado[],int cantidad);
void MostrarAlumnos(eAlumno listado[],int cantidad);
void CargarAlumnosTest(eAlumno listado[],int cantidad);
void MostarUnAlumno(eAlumno Alguno);

int DameElIndiceLibre(eAlumno listado[],int cantidad);




int main()
{
    eAlumno ArrayDeAlumnos[TAMANIO];
    eAlumno NuevoAlumno;

    printf("Estructuras!\n");

    InicializarAlumnos(ArrayDeAlumnos,TAMANIO);

    CargarAlumnosTest(ArrayDeAlumnos,TAMANIO);

    MostrarAlumnos(ArrayDeAlumnos,TAMANIO);

   // BuscarAlumnoPorNombre(ArrayDeAlumnos,TAMANIO,"julieta");

    return 0;
}
void CargarAlumnosTest(eAlumno listado[],int cantidad)
{
    int i;
    int legajoAux[]={555,888,444,666,111};
    int notaAux[]={10,2,9,4,6};
    char nombreAux[][50]={"juan","pedro","maria","julieta","pepe"};
    for(i=0;i<cantidad;i++){
        listado[i].estaVacio=0;
        listado[i].legajo=legajoAux[i];
        listado[i].nota=notaAux[i];
        strcpy( listado[i].nombre,nombreAux[i]);
    }


}
void MostarUnAlumno(eAlumno Alguno){

    printf("\n%d ", Alguno.legajo);
    printf("\t\t%s", Alguno.nombre);
    printf("\t\t%d", Alguno.nota);



}
void InicializarAlumnos(eAlumno listado[],int cantidad){
    int i;
    for(i=0;i<cantidad;i++){
        listado[i].estaVacio=1;
    }

}

int DameElIndiceLibre(eAlumno listado[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++){
        if(listado[i].estaVacio==1)
        {
           return i;

        }
    }
    return -1;

}
void MostrarAlumnos(eAlumno listado[],int cantidad){
    int i;
    int tieneAlumnos=0;
    printf("\nLegajo\t\tNombre\t\tNota\n ");
    for(i=0;i<cantidad;i++){
        if(listado[i].estaVacio==0)
        {
            tieneAlumnos=1;
            MostarUnAlumno(listado[i]);
        }
    }
    if(tieneAlumnos==0)
    {
        printf("No Hay alumnos para mostrar \n");
    }
}
