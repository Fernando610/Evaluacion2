#include<iostream>
int main(){
    char salir;
    int num[4];
    int cont;
    int producto_numeros;
    for(cont=0;cont<=3;cont++){
                               std::cout<<"Introduce los numeros",cont,":";
                               std::cin>>num[cont];
}
    producto_numeros=1;
    for(cont=0;cont<=3;cont++){
                               producto_numeros=producto_numeros*num[cont];
}
    std::cout<<"El producto vale: ";
    std::cout<<producto_numeros;
    std::cout<<"\n";
    std::cin>>salir;
}
