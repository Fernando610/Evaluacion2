#include<iostream>
/*Un programa que lea una palabra y me devuelva el numero de letras*/
int main(){
    char palabra[10];
    char salir;
    float longitud;
    int cont;
    longitud=0;//Inicializo la variable
    std::cout<<"Dime tu nombre:";
    std::cin>>palabra;
    //Dirty trick
    cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
}
    std::cout<<"El nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene ";
    std::cout<<longitud;
    std::cout<<" letras";
    std::cin>>salir;
}
