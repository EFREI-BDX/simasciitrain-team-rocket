#include "PassengerWagon.h"

PassengerWagon::PassengerWagon(int passengerCount) : AbstractWagon(&TypeWagon::PASSENGER) {
    this->passengerCount__ = passengerCount;
}

PassengerWagon::~PassengerWagon() = default;

int PassengerWagon::getPassengerCount() const {
    return this->passengerCount__;
}

void PassengerWagon::setPassengerCount(int passengerCount) {
    this->passengerCount__ = passengerCount;
}