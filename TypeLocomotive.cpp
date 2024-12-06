#include "TypeLocomotive.h"

TypeLocomotive::TypeLocomotive(std::string name, char symbol) {
    this->name__ = name;
    this ->symbol__ = symbol;
}

std::string TypeLocomotive::getName() {
    return this->name__;
}

char TypeLocomotive::getSymbol(){
    return this->symbol__;
}

TypeLocomotive TypeLocomotive::ELECTRIC = TypeLocomotive("Electrique",'E');
TypeLocomotive TypeLocomotive::GASOLINE = TypeLocomotive(" Essence", 'G');