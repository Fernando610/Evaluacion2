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
           
           Amigo misAmigos[3];//Guardo memoria para un dato de tipo Amigo
           for(cont=0;cont<3;cont++){
                                     std::cout<<"Dime tu numero,amigoo: ";
                                     std::cin>>misAmigos[cont].n_amigo;
                                     std::cout<<"Dime cuanto dinero tiene: ";
                                     std::cin>>misAmigos[cont].dinero;
                                     //Recupero los datos de mi Amigo Pepito.
                                     std::cout<<"Yo tengo un amigo que se llama Pepito";
                                     std::cout<<"\nPepito es mi amigo nº"<<misAmigos[cont].n_amigo;
                                     std::cout<<"\ny tiene "<<misAmigos[cont].dinero<<" euros";
           }
           std::cin>>salir;
}
           
