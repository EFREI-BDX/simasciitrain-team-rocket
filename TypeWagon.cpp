#include "TypeWagon.h"

TypeWagon::TypeWagon(std::string name, char symbol) {
    this->name__ = name;
    this->symbol__ = symbol;
}

std::string TypeWagon::getName() const {
    return this->name__;
}

char TypeWagon::getSymbol() const {
    return this->symbol__;
}

const TypeWagon TypeWagon::PASSANGER = TypeWagon("Passenger", 'o');
const TypeWagon TypeWagon::FREIGHT = TypeWagon("Freight", '#');
const TypeWagon TypeWagon::UTILITY = TypeWagon("Utility", '@');
