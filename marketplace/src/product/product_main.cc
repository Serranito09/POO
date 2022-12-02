#include "product.h"
#include <iostream>

int main(){
    Product p("2");
    std::cout<<p.get_id()<<"\n"<<p.get_name()<<"\n"<<p.get_price()<<"\n"<<p.get_seller()<<"\n";

}