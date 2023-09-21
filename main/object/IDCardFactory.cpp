#include "IDCardFactory.h"
#include "Product.h"
#include "IDCard.h"

IDCardFactory::IDCardFactory(){};

IDCardFactory::~IDCardFactory(){};

Product* IDCardFactory::createProduct(std::string owner) {
    return new IDCard(owner);
}

void IDCardFactory::registerProduct(Product* product) {
    m_owners.push_back(dynamic_cast<IDCard*>(product)->getOwner());
}

std::list<std::string> IDCardFactory::getOwners() {
    return m_owners;
}