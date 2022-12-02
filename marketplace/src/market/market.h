#ifndef MARKET_H_
#define MARKET_H_

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include "client.h"
#include "seller.h"

class Market {

    private:
    std::list<Client> client_list_;
    std::list<Seller> seller_list_;
    std::string slogan_;

    public:
    Market(std::string slogan) {slogan_=slogan;}
    inline std::string get_slogan() const {return slogan_;}
    inline void set_slogan(std::string slogan) {slogan_=slogan;}
    bool add_client(Client client);
    bool add_seller(Seller seller);
    inline int n_clients() {return client_list_.size();}
    inline int n_sellers() {return seller_list_.size();}
    bool delete_client(Client client);
    bool delete_seller(Seller seller);
    bool add_product_seller(Product p, std::string id_seller);
    bool add_product_client(Product p, std::string id_client);
    bool delete_product_seller(Product p, std::string id_seller);
    bool delete_product_client(Product p, std::string id_client);
    int get_money_in_basket();
    

};

#endif