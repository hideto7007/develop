#ifndef IDCARD_H
#define IDCARD_H

#include <iostream>
#include "Product.h"

class IDCard : public Product{
    public:
        IDCard(std::string owner);
        ~IDCard();
        void use() final;
        std::string getOwner();

    private:
        std::string m_owner;
};


#endif // IDCARD_H