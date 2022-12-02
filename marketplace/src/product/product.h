//person.h
//a simple person class

#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
class Product{
    private:
        std::string id_,name_,maker_,seller_;
        float price_;
    public:
        
            Product(std::string id,
                std:: string name="empty",
                 float price=0.0,
                std:: string maker="empty",
                std:: string seller="empty"
                );
                
                //observadores
                inline std:: string get_id()const {return id_;}
                inline std:: string get_name()const{return name_;}
                inline float get_price(){return price_;}
                inline std:: string get_maker()const{return maker_;}
                inline std:: string get_seller()const{return seller_;}
                
                //modificadores
                inline void set_id(std:: string id){id_=id;}
                inline void set_name(std::string name){name_=name;}
                inline void set_price(float price){price_=price;}
                inline void set_maker(std::string maker){maker_=maker;}
                inline void set_seller(std::string seller){seller_=seller;}
    





};


#endif