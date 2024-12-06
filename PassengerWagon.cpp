#include "PassengerWagon.h"

PassengerWagon::PassengerWagon() {
    this->passengerCount__ = 0;
}

PassengerWagon::~PassengerWagon() = default;

int PassengerWagon::getPassengerCount() const {
    return this->passengerCount__;
}

void PassengerWagon::setPassengerCount(int passengerCount) {
    this->passengerCount__ = passengerCount;
}