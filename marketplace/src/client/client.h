#ifndef CLIENT_H_
#define CLIENT_H_

#include <iostream>
#include <string>
#include <list>
#include "person.h"
#include "basket.h"
#include <map>
#include<vector>

class Client:public Person{
    private:
    int premium_;
    public:
    inline Client(std::string id,
                std:: string name="empty",
                std:: string surname="empty",
                std:: string addres="empty",
                std:: string town="empty",
                std:: string province="empty",
                std:: string country="empty",
                int entry_year=0,
                int premium=0):Person(id,name,
                surname,addres,town,province,country,
                entry_year){premium_=premium;}
    inline int get_premium()const{return premium_;};
    inline void set_premium(int premium){premium_=premium;};
                

};

#endif
