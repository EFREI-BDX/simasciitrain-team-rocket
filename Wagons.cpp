#include "Wagons.h"

Wagons::Wagons() {
    this->wagons__ = std::pmr::vector<AbstractWagon*>();
}

Wagons::~Wagons() = default;

Wagons* Wagons::addWagon(AbstractWagon* wagon) {
    this->wagons__.push_back(wagon);
    return this;
}

std::ostream& operator<<(std::ostream& os, const Wagons& wagons) {
    for (auto wagon : wagons.wagons__) {
        os << *wagon << "-";
    }
    return os;
}
