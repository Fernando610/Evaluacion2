#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fernando.h>

int main(){
    char *palabras[4];
    char *p_aux;
    int cont;
    char aux[20];
    char salir;
    int longitud;
    int veces;
    //Leo cuatro palabras
    for(cont=0;cont<4;cont++){
                              std::cout<<"palabras: ";
                              std::cin>>aux;
                              longitud=devuelve_longitud(aux);
                              palabras[cont]=(char *)malloc((longitud+1)*sizeof(char));
                              std::cout<<longitud;
                              strcpy(palabras[cont],aux);
                              }
    std::cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
                              printf("%s\n",palabras[cont]);
                              }
    //ORDENAMOS POR EL METODO DE LA BURBUJA
    for(veces=1;veces<4;veces++){
                                 for(cont=0;cont<3;cont++){
                                                           if(strcmp(palabras[cont],palabras[cont+1])>0){
                                                                                                        p_aux=palabras[cont];
                                                                                                        palabras[cont]=palabras[cont+1];
                                                                                                        palabras[cont+1]=p_aux;
                                                                                                        }
                                                           }
                                 }    
    std::cout<<"\nLISTA DE PALABRAS ORDENADAS\n";
    for(cont=0;cont<4;cont++){
                              printf("%s\n",palabras[cont]);
                              }         
    std::cin>>salir;
}
