#include "AbstractWagon.h"
#include <ostream>

AbstractWagon::AbstractWagon(TypeWagon *typeWagon) {
    this->typeWagon__ = typeWagon;
}

AbstractWagon::~AbstractWagon() = default;

std::string AbstractWagon::getType() {
    return this->typeWagon__->getName();
}

char AbstractWagon::getSymbol() {
    return this->typeWagon__->getSymbol();
}

