#include "FreightWagon.h"

FreightWagon::FreightWagon(int freightCount) {
    this->freightCount__ = freightCount;
}

FreightWagon::~FreightWagon() = default;

int FreightWagon::getFreightCount() const {
    return this->freightCount__;
}

void FreightWagon::setFreightCount(int freightCount) {
    this->freightCount__ = freightCount;
}

