//person.h
//a simple person class

#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person{
    private:
        std::string id_,name_,surname_,address_,town_,province_,country_;//variables privadas
        int entry_year_;
    public:
        
            Person(std::string id,
                std:: string name="empty",
                std:: string surname="empty",
                std:: string addres="empty",
                std:: string town="empty",
                std:: string province="empty",
                std:: string country="empty",
                int entry_year=0);
                
                //observadores
                inline std:: string get_id()const {return id_;}
                inline std:: string get_name()const{return name_;}
                inline std:: string get_surname()const{return surname_;}
                inline std:: string get_address()const{return address_;}
                inline std:: string get_town()const{return town_;}
                inline std:: string get_province()const{return province_;}
                inline std:: string get_country()const{return country_;}
                inline int get_entry_year(){return entry_year_;}
                
                //modificadores
                inline void set_id(std:: string id){id_=id;}
                inline void set_name(std::string name){name_=name;}
                inline void set_surname(std::string surname){surname_=surname;}
                inline void set_address(std::string address){address_=address;}
                inline void set_town(std::string town){town_=town;}
                inline void set_province(std::string province){province_=province;}
                inline void set_country(std::string country){country_=country;}
                inline std::string get_name_surname()const{return name_+" "+surname_;}
                bool set_entry_year(int entry_year);
                std::string get_full_address();






};


#endif