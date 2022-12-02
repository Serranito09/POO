#include "market.h"

bool Market::add_client(Client client) {
    for(std::list<Client>::iterator it=client_list_.begin(); it!=client_list_.end(); it++) {
        if(it->get_id()==client.get_id()) {
            return false;
        }
    }
    client_list_.push_back(client);
    return true;
}

bool Market::add_seller(Seller seller) {
    for(std::list<Seller>::iterator it=seller_list_.begin(); it!=seller_list_.end(); it++) {
        if(it->get_id()==seller.get_id()) {
            return false;
        }
    }
    seller_list_.push_back(seller);
    return true;
}

bool Market::delete_client(Client client) {
    for(std::list<Client>::iterator it=client_list_.begin(); it!=client_list_.end(); it++) {
        if(it->get_id()==client.get_id()) {
            client_list_.erase(it);
            return true;
        }
    }
    return false;
}

bool Market::delete_seller(Seller seller) {
    for(std::list<Seller>::iterator it=seller_list_.begin(); it!=seller_list_.end(); it++) {
        if(it->get_id()==seller.get_id()) {
            seller_list_.erase(it);
            return true;
        }
    }
    return false;
}

bool Market::add_product_seller(Product p, std::string id_seller) {
    for(auto it=seller_list_.begin(); it!=seller_list_.end(); it++) {
        if(it->get_id()==id_seller) {
            
        }
    }
    return false;
