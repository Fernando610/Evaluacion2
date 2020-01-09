#include<iostream>
/*Vamos a hacer un programa que nos pida 4 numeros para calcular la media*/
int main(){
    //Definicion de variables
    char salir;
    int num[4];
    int cont;
    float suma_numeros;
    float media;
    //Introudcimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
              std::cout<<"Introduce el numero",cont,":";
              std::cin>>num[cont];
              }
    //Sacamos los numeros guardados
    std::cout<<"Has metido los siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
              std::cout<<num[cont];
    }
    //Calculamos la media
    std::cout<<"MEDIA\n";
    suma_numeros=0;
    for(cont=0;cont<=3;cont++){
              suma_numeros=suma_numeros+num[cont];//suma acumulada
    }
    std::cout<<"La suma vale: ";
    std::cout<<suma_numeros;
    std::cout<<"\n";
    media=suma_numeros/4;
    std::cout<<"La media vale: ";
    std::cout<<media; 
    std::cout<<"\n";
    //Mostramos la lista en orden inverso
    for(cont=3;cont>=0;cont--){
              std::cout<<num[cont];
    }
    
      
      
    std::cin>>salir;
}
