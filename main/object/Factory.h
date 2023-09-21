#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>

class Product;

class Factory{
public:
    virtual Product* create(std::string owner) final;
    virtual Product* createProduct(std::string owner)=0;
    virtual void registerProduct(Product* product)=0;
};
#endif // FACTORY_H