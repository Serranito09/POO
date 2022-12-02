#include  <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(NULL));
    int i=-1;    
    int cont=0;
        int r=(rand()%10)+1;
    
    while(r!=i){
          std::cout<<"introduce un numero\n";
        std::cin>>i;
        if(r>i){
            std::cout<<"el numero buscado es mayor,";
        }
        if(r<i){
            std::cout<<"el numero buscado es menor\n";
        }
        std::cout<<"siga intentandolo\n";
        cont++;
    }

    std::cout<<"Enhorabuena has acertado el numero secreto que era "<<r<<" en un numero de intentos ha sido de "<<cont<<"\n";

}