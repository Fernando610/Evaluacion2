#include<iostream>
/*Un programa que lea una palabra y me devuelva la inicial*/
int main(){
    char palabra[9];
    char salir;
    float longitud;
    int cont;
    std::cout<<"Dime tu nombre:";
    std::cin>>palabra;
    std::cout<<"\nTe llamas ";
    std::cout<<palabra;
    //std::cout<<"\nLa primera letra de tu nombre es la ";
    //std::cout<<palabra[0];
    std::cout<<"\nANIMADORA: \n";
    for(cont=0;cont<=9;cont++){
                               std::cout<<palabra[cont];
                               std::cout<<'\n';
}
    //contamos cuantas letras tiene tu nombre
     for(cont=0;cont<=9;cont++){
                                if(palabra[cont]!='\0'){
                                                        longitud=longitud+1;
                                }
    }
    std::cout<<"El nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene ";
    std::cout<<longitud;
    std::cout<<" letras";
    std::cin>>salir;
}
