#include "TypeLocomotive.h"

TypeLocomotive::TypeLocomotive(std::string name, char symbol) {
    this->name__ = name;
    this ->symbol__ = symbol;
}

std::string TypeLocomotive::getName() const {
    return this->name__;
}

char TypeLocomotive::getSymbol() const{
    return this->symbol__;
}

const TypeLocomotive TypeLocomotive::ELECTRIC = TypeLocomotive("Electrique",'E');
const TypeLocomotive TypeLocomotive::GASOLINE = TypeLocomotive(" Essence", 'G');