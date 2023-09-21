#ifndef IDCARDFACTORY_H
#define IDCARDFACTORY_H

#include <iostream>
#include <list>
#include "Factory.h"

class Product;

class IDCardFactory : public Factory {
    public:
        IDCardFactory();
        ~IDCardFactory();
        Product* createProduct(std::string owner);
        void registerProduct(Product* product);
        std::list<std::string> getOwners();

    private:
        std::list<std::string> m_owners;
};

#endif // IDCARD_H