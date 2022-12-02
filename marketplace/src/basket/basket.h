#ifndef BASKET_H_
#define BASKET_H_

#include <iostream>
#include <string>
#include <list>
#include "product.h"
#include <map>
#include<vector>


class Basket{
    private:
    std::list<Product> product_list_;
    float total_=0.0;
    std::map<std::string,int> product_quantity_;

    public:
    //constructor
    Basket(float total=0.0);
    //getter and setter
    inline float get_total() const {return total_;}
    //other
    void add_product(Product product);
    bool delete_product(Product product);
    bool delete_product(std::string id);
    void delete_basket();
    int get_size();
    std::vector<std::string>get_ids();
    std::vector<int>get_qs();
 
};

#endif