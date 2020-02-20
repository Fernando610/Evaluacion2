#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char salir;
    int cont;
    struct Amigo{
           int n_amigo;
           float dinero;
           };
           typedef struct{
                   char nombre[20];
                   int edad;
                   char email;
                   }datosPersona;
                   datosPersona alumno[3];
                   //datosPersona*p_aux;
                   //p_aux=&alumno1;
                   for(cont=0;cont<3;cont++){
                                             std::cout<<"dime tu nombre"; 
                                             std::cin>>alumno[cont].nombre;
                                             }
                                             std::cout<<"\nLISTA DE LA CLASE";
                   for(cont=0;cont<3;cont++){
                                             std::cout<<"Alumno "<<cont+1<<" "<<alumno[cont].nombre;
                                             }
           std::cin>>salir;
}
