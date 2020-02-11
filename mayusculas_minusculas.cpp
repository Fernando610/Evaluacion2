#include<iostream>
//*Un programa que lea una palabra y sustituya las letras de minúscula a mayúscula y viceversa
int devuelve_longitud(char palabra[]){
    int longitud=0;
    int cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               }
    return(longitud);
}
int main(){
    char palabra[10];
    int cont;
    char salir;
    std::cout<<"Dime tu nombre:";
    std::cin>>palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){
                                                       if(palabra[cont]>=65 && palabra[cont]<=95){
                                                                            palabra[cont]=palabra[cont]+32;
                                                                                                }
                                                       else(palabra[cont]>=97 && palabra[cont]<=112){
                                                                            palabra[cont]=palabra[cont]-32;
                                                                                                  }
                                                       }
     std::cout<<"palabra troleada: "<<palabra;
    std::cin>>salir;
}
