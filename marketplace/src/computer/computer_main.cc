#include <stdio.h>
#include <string.h>
#include "computer.h"
#include <iostream>

int main(){
    Computer ordenador("34XX",Server,"ASUS",1,"pp","serrano furbol club");
    std::cout<<ordenador.get_type()<<",";
    std:: cout<<ordenador.get_price()<<","<<ordenador.get_name()<<std::endl;
}