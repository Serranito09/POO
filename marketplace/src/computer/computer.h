#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include "product.h"
enum ComputerType{Desktop,laptop,Server,Tablet,Gaming};

    class Computer:public Product{
        private:
        ComputerType type_;
        public:
        inline Computer(std::string id, ComputerType type,std::string name="empty",float price=0.0,std::string maker="empty",
        std::string seller="empty"): Product(id,name,price,maker,seller) {type_=type;}

        inline ComputerType get_type()const{return type_;}
        inline void set_type(ComputerType type) {type_=type;}


    };

#endif