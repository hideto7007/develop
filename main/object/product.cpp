#include "Factory.h"
#include "Product.h"

Product* Factory::create(std::string owner) {
    Product* p = createProduct(owner);
    registerProduct(p);
    return p;
} 