#include<iostream>

int main(){
    //Definición de variables
    char salir;
    char respuesta;
    std::cout<<"hola mundo";
    std::cout<<"Eres guapo?(s/n)";
    std::cin>> respuesta;
    if (respuesta=='s'||respuesta=='S'){
         std::cout<<"hola guapo";
    }
    else{
         std::cout<<"Hola feo";
    }
    std::cin>>salir;          
}
