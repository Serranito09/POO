#include "basket.h"

int main() {
    Basket basket; 
    Product prod1("111A", "Prod1", 23.45, "Maker1", "Seller1");
    Product prod2("222B", "Prod2", 56.78, "Maker2", "Seller2");
    Product prod3("333C", "Prod3", 12.34, "Maker3", "Seller3");
     Product prod4("333d", "Prod3", 12.34, "Maker3", "Seller3");

    basket.add_product(prod1);
    basket.add_product(prod2);
    basket.add_product(prod3);
    basket.add_product(prod4);
     basket.add_product(prod4);
     basket.delete_product(prod4);
     basket.delete_product(prod4);
     basket.delete_product(prod3);

    std::cout<<basket.get_size()<<std::endl;
}