#include "AbstractLocomotive.h"
#include <ostream>

AbstractLocomotive::AbstractLocomotive(TypeLocomotive* typeLocomotive) {
    this->typeLocomotive__ = typeLocomotive;
}

AbstractLocomotive::~AbstractLocomotive() = default;

std::string AbstractLocomotive::getType() override {
    return this->typeLocomotive__->getName();
}

char AbstractLocomotive::getSymbol() override {
    return this->typeLocomotive__->getSymbol();
}

void AbstractLocomotive::print(std::ostream& os) const {
os << "[" << typeLocomotive__->getSymbol() << "]" << ">" << std::endl;
}