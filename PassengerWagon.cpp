#include "PassengerWagon.h"

PassengerWagon::PassengerWagon(int passengerCount) : AbstractWagon(&TypeWagon::PASSENGER) {
    this->passengerCount__ = passengerCount;
}

int PassengerWagon::getPassengerCount() const {
    return this->passengerCount__;
}

void PassengerWagon::setPassengerCount(int passengerCount) {
    this->passengerCount__ = passengerCount;
}

void PassengerWagon::print(std::ostream& os) const {
    os << "[" << std::string(this->passengerCount__, this->typeWagon__->getSymbol()) << "]";
}
