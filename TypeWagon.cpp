#include "TypeWagon.h"

TypeWagon::TypeWagon(std::string name, char symbol) {
    this->name__ = name;
    this->symbol__ = symbol;
}

std::string TypeWagon::getName() {
    return this->name__;
}

char TypeWagon::getSymbol() {
    return this->symbol__;
}

TypeWagon TypeWagon::PASSENGER = TypeWagon("Passenger", '0');
TypeWagon TypeWagon::FREIGHT = TypeWagon("Freight", '#');
TypeWagon TypeWagon::UTILITY = TypeWagon("Utility", '@');
