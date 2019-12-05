#include<iostream>
/*Vamos a hacer un programa que dibuje un cuadrado del tamaño que nos diga el usuario*/
int main(){
    //Definicion de variables
    char salir;
    int lado,col,fil;
    std::cout<<"Dime el tamanho del cuadrado: ";
    std::cin>>lado;
    for(col=1;col<=lado;col++){
                              for(fil=1;fil<=lado;fil++){
                                   std::cout<<'*';
                                   std::cout<<' ';
                                   }
                                   std::cout<<"\n";
    }
    std::cin>>salir;
}
