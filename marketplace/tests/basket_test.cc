// basket_test.cc: Juan A. Romero
// Testing class Basket

#include <basket.h>
#include "gtest/gtest.h"

TEST(Basket, Basket_add_product) {
  Basket b;
  Product p1("11XX"), p2("22XX"), p3("33XX");
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  Product p4("44XX"), p5("55XX");
  b.add_product(p4);
  b.add_product(p5);
  EXPECT_EQ(5, b.get_size());
}


TEST(Basket, Basket_delete_product1) {
  Basket b;
  Product p1("11XX"), p2("22XX"), p3("33XX");
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  EXPECT_EQ(3, b.get_size());
  EXPECT_TRUE(b.delete_product(p1));
  EXPECT_EQ(2, b.get_size());
  Product p4("44XX"), p5("55XX");
  b.add_product(p4);
  EXPECT_EQ(3, b.get_size());
  EXPECT_FALSE(b.delete_product(p5));
  EXPECT_EQ(3, b.get_size());
  b.add_product(p1);
  EXPECT_EQ(4, b.get_size());
  EXPECT_FALSE(b.delete_product(p5));
  EXPECT_EQ(4, b.get_size());
  EXPECT_TRUE(b.delete_product(p1));
  EXPECT_TRUE(b.delete_product(p2));
  EXPECT_TRUE(b.delete_product(p3));
  EXPECT_TRUE(b.delete_product(p4));
  EXPECT_EQ(0, b.get_size());
}

TEST(Basket, Basket_delete_product2) {
  Basket b;
  Product p1("11XX"), p2("22XX"), p3("33XX");
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  EXPECT_EQ(3, b.get_size());
  EXPECT_TRUE(b.delete_product(p1.get_id()));
  EXPECT_EQ(2, b.get_size());
  Product p4("44XX"), p5("55XX");
  b.add_product(p4);
  EXPECT_EQ(3, b.get_size());
  EXPECT_FALSE(b.delete_product(p5.get_id()));
  EXPECT_EQ(3, b.get_size());
  b.add_product(p1);
  EXPECT_EQ(4, b.get_size());
  EXPECT_FALSE(b.delete_product(p5));
  EXPECT_EQ(4, b.get_size());
  EXPECT_TRUE(b.delete_product(p1.get_id()));
  EXPECT_TRUE(b.delete_product(p2.get_id()));
  EXPECT_TRUE(b.delete_product(p3.get_id()));
  EXPECT_TRUE(b.delete_product(p4.get_id()));
  EXPECT_EQ(0, b.get_size());
}

TEST(Basket, Basket_delete_basket) {
  Basket b;
  Product p1("P1"), p2("P2"), p3("P3");
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  EXPECT_EQ(3, b.get_size());
  EXPECT_TRUE(b.delete_product(p1.get_id()));
  EXPECT_EQ(2, b.get_size());

  Product p4("P4"), p5("P5"), p6("P6");
  b.add_product(p4);
  EXPECT_EQ(3, b.get_size());
  EXPECT_FALSE(b.delete_product(p5.get_id()));
  EXPECT_EQ(3, b.get_size());

  b.add_product(p1); // p1 lo había borrado
  EXPECT_EQ(4, b.get_size());
  EXPECT_FALSE(b.delete_product(p5));
  EXPECT_EQ(4, b.get_size());

  b.delete_basket();
  EXPECT_EQ(0, b.get_size());
  b.add_product(p1);
  EXPECT_EQ(1, b.get_size());
  b.add_product(p2);
  EXPECT_EQ(2, b.get_size());
  b.add_product(p3);
  EXPECT_EQ(3, b.get_size());
  b.delete_basket();
  EXPECT_EQ(0, b.get_size());  
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}