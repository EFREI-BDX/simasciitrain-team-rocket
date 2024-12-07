#include "FreightWagon.h"

FreightWagon::FreightWagon(int freightCount) : AbstractWagon(&TypeWagon::FREIGHT) {
    this->freightCount__ = freightCount;
}

FreightWagon::~FreightWagon() = default;

int FreightWagon::getFreightCount() const {
    return this->freightCount__;
}

void FreightWagon::setFreightCount(int freightCount) {
    this->freightCount__ = freightCount;
}

void FreightWagon::print(std::ostream& os) const {
    os << "[" << std::string(this->freightCount__, this->typeWagon__->getSymbol()) << "]";
}
