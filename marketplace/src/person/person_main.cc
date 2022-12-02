#include "person.h"
#include <iostream>

int main(){
    Person p("xx23","Alvaro","serrano","pepe el chulo","cordoba","españa","2021");
    std::cout<<p.get_id()<<"\n"<<p.get_full_address()<<p.get_town()<<p.get_entry_year()<<"\n";
    if(p.set_entry_year(p.get_entry_year())==false){
        std::cout<<"fecha introducida no valida\n";
    }

}