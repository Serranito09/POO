#include "basket.h"

Basket::Basket(std::string id, float total) {
    id_=id;
    total_=total;
}

void Basket::add_product(Product product) {// ESTA BIEN MUY BIEN 
    if(product_quantity_.count(product.get_id())==0){
    product_quantity_[product.get_id()] =1;
        product_list_.push_back(product);
    }
    else if(product_quantity_.count(product.get_id())==1){
        product_quantity_[product.get_id()]+=1;
    }
     total_+=product.get_price();
}

bool Basket::delete_product(Product product) {
    for (std::list<Product>::iterator it=product_list_.begin(); it!=product_list_.end(); it++) {
        if(it->get_id()==product.get_id()) {
            total_-=product.get_price();
             product_quantity_[product.get_id()]-=1;
             if(product_quantity_.count(product.get_id())==0){
                product_list_.erase(it);
                          total_-=product.get_price();
             }
            return true;
        }
    }
    return false;
}

bool Basket::delete_product(std::string dni) {
    Product prod(dni);
    for (std::list<Product>::iterator it=product_list_.begin(); it!=product_list_.end(); it++) {
        if(it->get_id()==dni) {
            total_-=prod.get_price();
            product_list_.erase(it);
            return true;
        }
    }
    return false;
}

void Basket::delete_basket() {
    product_list_.clear();
    total_=0.0;
}

int Basket::get_size() {
    int res=0;
    for (auto it=product_list_.begin(); it!=product_list_.end(); it++) {
        res++;
    }
    return res;
}