#include "UtilityWagon.h"

UtilityWagon::UtilityWagon() :AbstractWagon(&TypeWagon::UTILITY){}
UtilityWagon::~UtilityWagon() = default;

void UtilityWagon::print(std::ostream& os) const {
    os << "[" << this->typeWagon__->getSymbol() << "]" << std::endl;
}
