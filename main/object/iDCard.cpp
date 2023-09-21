#include <iostream>
#include "IDCard.h"


IDCard::IDCard(std::string owner) : m_owner(owner){
    std::cout << owner << "のカードを作ります" << std::endl;
};

IDCard::~IDCard(){};

void IDCard::use() {
    std::cout << m_owner << "のカードを使います" << std::endl;
};

std::string IDCard::getOwner() {
    return m_owner;
}