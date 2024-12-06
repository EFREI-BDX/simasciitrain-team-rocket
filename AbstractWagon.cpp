#include "AbstractWagon.h"

#include <ostream>

AbstractWagon::AbstractWagon(TypeWagon* typeWagon) {
    this->typeWagon__ = typeWagon;
}

AbstractWagon::~AbstractWagon() = default;

std::string AbstractWagon::getType() override {
    return this->typeWagon__->getName();
}

char AbstractWagon::getSymbol() override {
    return this->typeWagon__->getSymbol();
}

void AbstractWagon::print(std::ostream& os) {
    os << "[" << typeWagon__->getSymbol() << "]" << std::endl;
}
